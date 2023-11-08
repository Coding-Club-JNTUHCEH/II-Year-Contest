import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int z = scanner.nextInt();
        int a = Math.abs(x - z);
        int b = Math.abs(y - z);
        if (a == b)
            System.out.println("C");
        else if (a > b)
            System.out.println("B");
        else
            System.out.println("A");
    }
}
