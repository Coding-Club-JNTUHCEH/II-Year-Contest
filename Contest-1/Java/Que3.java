import java.util.Scanner;

public class Que3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int h = scanner.nextInt();
        int[] a = new int[n];
        int width = 0;

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            if (a[i] <= h) {
                width++;
            } else {
                width += 2;
            }
        }

        System.out.println(width);
    }
}

