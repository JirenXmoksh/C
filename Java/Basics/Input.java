import java.util.Scanner;

public class Input{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.out.print("Enter your name: ");
        // String name = sc.next();
        // System.out.println("Your name is: " + name);

        System.out.print("Enter your name: ");
        String fullname = sc.nextLine(); // to get a full sentence (with spaces)
        System.out.println("Your name is: " + fullname);

        // System.out.print("Enter a number: ");
        // int num_1 = sc.nextInt();
        // System.out.println("The entered number was: " + num_1);
        sc.close();
    }
}