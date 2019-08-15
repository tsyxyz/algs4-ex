package my;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

public class Parentheses {
    public static boolean isPaired(String str) {
        Stack<Character> s = new Stack<Character>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            } else if (s.isEmpty()) {
                return false;
            } else if (ch == ')') {
                if (s.pop() != '(') return false;
            } else if (ch == ']') {
                if (s.pop() != '[') return false;
            } else if (ch == '}') {
                if (s.pop() != '{') return false;
            } else {
                return false;
            }
        }
        return s.isEmpty();
    }

    public static void main(String[] args) {
        String str = "";
        while (!StdIn.isEmpty()) {
            str = StdIn.readString();
        }
        if (isPaired(str)) {
            StdOut.println("true");
        } else {
            StdOut.println("false");
        }
    }
}