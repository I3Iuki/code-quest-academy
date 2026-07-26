package aeiou;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String vowels = "aeiou";

        try (Scanner scanner = new Scanner(System.in)) {
            int caseCount = Integer.valueOf(scanner.nextLine());

            for (int cases = 0; cases < caseCount; cases++) {
                String line = scanner.nextLine();
                int count = 0;

                for (char c : line.toCharArray()) {
                    if (vowels.indexOf(c) != -1) {
                        count++;
                    }
                }

                System.out.println(count);
            }
        }
    }
}
