package my;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

public class CompleteParentheses {
    public static String[] complete(String[] strs) {
        Stack<String> stack = new Stack<String>();
        for (int i = 0; i < strs.length; i++) {
            String str = strs[i];
            if (!str.equals(")")) {
                stack.push(str);
            }
        }
    }

    public static void main(String[] args) {
        String[] strs = StdIn.readAllStrings();
        for (int i = 0; i < strs.length; i++) {
            String[] ret = complete(strs);
        }
    }
}