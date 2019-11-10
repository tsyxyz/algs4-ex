package my.ch1;

import java.util.Iterator;
import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

public class DoublingStackOfStrings implements Iterable<String> {
    private String[] a = new String[1];
    private int N = 0;

    public boolean isEmpty() {
        return N == 0;
    }

    public int size() {
        return N;
    }

    public int arraySize() {
        return a.length;
    }

    private void resize(int max) {
        String[] temp = new String[max];
        for (int i = 0; i < N; i++) {
            temp[i] = a[i];
        }
        a = temp;
    }

    public void push(String s) {
        if (N == a.length) {
            resize(2 * a.length);
        }
        a[N++] = s;
    }

    public String pop() {
        String s = a[--N];
        a[N] = null;
        if (N > 0 && N == a.length / 4) {
            resize(a.length / 2);
        }
        return s;
    }

    public Iterator<String> iterator() {
        return new ReverseArrayIterator();
    }

    private class ReverseArrayIterator implements Iterator<String> {
        private int i = N;

        public boolean hasNext() {
            return i > 0;
        }

        public String next() {
            return a[--i];
        }

        public void remove() {}
    }

    public static void main(String[] args) {
        DoublingStackOfStrings s = new DoublingStackOfStrings();
        while (!StdIn.isEmpty()) {
            String item = StdIn.readString();
            if (!item.equals("-")) {
                s.push(item);
            } else if (!s.isEmpty()) {
                s.pop();
            }
        }
        for (String item : s) {
            StdOut.printf("%s ", item);
        }
        StdOut.printf("%narray size: %d%n", s.arraySize());
    }
}