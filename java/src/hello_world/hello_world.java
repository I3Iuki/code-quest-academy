package hello_world;

import java.util.Scanner;

class hello_world {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int asdf = Integer.parseInt(scanner.nextLine());

            for (int asd = 0; asd < asdf; asd++) {
                System.out.println(scanner.nextLine());
            }
        }
    }
}