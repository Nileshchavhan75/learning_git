import java.util.Scanner;

public class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        int val = 1;
        for (int i = 1; i <= n; ++i) {
            int temp = val;
            int colIncre = n-i+1;

            for (int j = 1; j <= i; ++j) {
                System.out.print(temp +" ");
                temp = temp - colIncre;
                colIncre++;
            }
            val = val + (n-i+1);
            System.out.println();
        }
    }
}
