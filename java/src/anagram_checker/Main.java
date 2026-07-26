package anagram_checker;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int cases = Integer.valueOf(scanner.nextLine());

            for (int caseCounter = 0; caseCounter < cases; caseCounter++) {
                String yeah = scanner.nextLine();
                String[] words = yeah.toLowerCase().split("\\|");

                if (words[0].equals(words[1])) {
                    System.out.printf("%s = NOT AN ANAGRAM", yeah);
                    continue;
                }

                char[] first = words[0].toCharArray();
                char[] second = words[1].toCharArray();

                Arrays.sort(first);
                Arrays.sort(second);

                if (!Arrays.equals(first, second)) {
                    System.out.printf("%s = NOT AN ANAGRAM", yeah);
                } else {
                    System.out.printf("%s = ANAGRAM", yeah);
                }
            }
        }
    }
}
