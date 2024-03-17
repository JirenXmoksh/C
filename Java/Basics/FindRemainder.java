import java.util.Scanner;
public class FindRemainder{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // yes '%' exists but still we doing this
        System.out.print("Enter dividend: ");
        int a = sc.nextInt();
        System.out.print("Enter divisor: ");
        int b = sc.nextInt();

        int q = a/b; //to find the quotient

        // we have to find remainder, which is : divisor*quotient + remainder
        System.out.println("The remainder when " +a+ " is divided by " +b+ " is: " +(a-(b*q)));
    sc.close();
    }
}