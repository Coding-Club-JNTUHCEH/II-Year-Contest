// Approach -> We need to print the total number of chocolates present i.e the SUM of n and m
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read input integers
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        // Calculate and print the sum
        System.out.println(n + m);
    }
}
