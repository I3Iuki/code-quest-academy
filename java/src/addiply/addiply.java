package addiply;
import java.util.Scanner;
class addiply {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int cases = Integer.parseInt(scanner.nextLine());

            for (int caseCounter = 0; caseCounter < cases; caseCounter++) {
                String[] nums = scanner.nextLine().split(" ");
                int a = Integer.parseInt(nums[0]);
                int b = Integer.parseInt(nums[1]);

                System.out.printf("%d %d", (a + b) , (a * b));
            }
        }
    }
}