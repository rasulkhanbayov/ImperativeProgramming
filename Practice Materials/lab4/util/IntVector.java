package util;
import java.util.Arrays;

public class IntVector {
    private int[] ns;

    public IntVector(int[] numbers) {
        // 1.
        ns = new int[numbers.length];
        for (int i = 0; i < ns.length; i++)
            ns[i] = numbers[i];

        // 2.
        ns = Arrays.copyOf(numbers, numbers.length);
    }

    public void add(int n) {
        for (int i = 0; i < ns.length; i++)
            ns[i] += n;
    }

    public String toString() {
        // return Arrays.toString(ns);

        StringBuilder sb = new StringBuilder();
        String delim = "";
        for(int n : ns){
            sb.append(delim);
            sb.append(n);
            delim = " ";
        }
        return sb.toString();
    }
}

