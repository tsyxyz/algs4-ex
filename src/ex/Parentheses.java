package ex;

import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;
import my.Stack;

public class Parentheses {
    public static boolean isLeft(String s) {
        return s.equals("(") || s.equals("[") || s.equals("{");
    }

    public static boolean isRight(String s) {
        return s.equals(")") || s.equals("]") || s.equals("}");
    }

    public static String pairStr(String s) {
        String ret = "";
        switch (s) {
            case "(":
                ret = ")";
                break;
            case ")":
                ret = "(";
                break;
            case "[":
                ret = "]";
                break;
            case "]":
                ret = "[";
                break;
            case "{":
                ret = "}";
                break;
            case "}":
                ret = "{";
                break;
            default:
                ret = "";
                break;
        }
        return ret;
    }

    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();
        while (!StdIn.isEmpty()) {
            String item = StdIn.readString();
            if (isLeft(item)) {
                stack.push(item);
            } else if (!stack.isEmpty() && isRight(item)) {
                String s = stack.pop();
                if (!s.equals(pairStr(item))) {
                    stack.push(s);
                }
            } else {
                break;
            }
        }
        if 
    }
}