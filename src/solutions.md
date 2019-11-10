## 1.3

### 1.3.1

```java
public class FixedCapacityStackOfStrings {
//...
   public boolean isFull() {
       return N == a.length;
   }
//...
}
```

Referenced to [FixedCapacityStackOfStrings.java](my/ch1/FixedCapacityStackOfStrings.java).

### 1.3.2

```
was best times of the was the it (1 left on stack)
```

### 1.3.3

- a. YES
- b. NO
- c. YES
- d. YES
- e. YES
- f. NO
- g. NO
- h. YES

### 1.3.4

```java
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
```

Referenced to [Parentheses.java](my/ch1/Parentheses.java).

### 1.3.5

Print the binary of *N*.

### 1.3.6

Reverse queue *q*.

### 1.3.7

```java
public Item peek() {
    return first.item;
}
```

Referenced to [Stack.java](my/ch1/Stack.java).

### 1.3.8

```
it
array size: 2
```

Referenced to [DoublingStackOfStrings.java](my/ch1/DoublingStackOfStrings.java).

### 1.3.9

```java
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
```

Referenced to [CompleteParentheses.java](my/ch1/CompleteParentheses.java).