import java.util.Scanner;
public class PrintTillN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number till you want the counting: ");
        int num = sc.nextInt();
        int count = 0;
        while (count <= num) {
            System.out.println(count);
            count++;
        }
        sc.close();
    }
}
