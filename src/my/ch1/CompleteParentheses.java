package my.ch1;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

public class CompleteParentheses {
    public static String complete(String[] strs) {
        Stack<String> stack = new Stack<String>();
        for (int i = 0; i < strs.length; i++) {
            String str = strs[i];
            if (!str.equals(")")) {
                stack.push(str);
            } else {
                String[] temp = new String[3];
                for (int j = 2; j >= 0; j--) {
                    if (stack.isEmpty()) return null;
                    temp[j] = stack.pop();
                }
                String s = "(" + " ";
                for (int j = 0; j < temp.length; j++) {
                    s = s + temp[j] + " ";
                }
                s = s + str;
                stack.push(s);
            }
        }
        if (stack.size() != 1) return null;
        return stack.pop();
    }

    public static void main(String[] args) {
        String[] strs = StdIn.readAllStrings();
        String ret = complete(strs);
        StdOut.println(ret);
    }
}