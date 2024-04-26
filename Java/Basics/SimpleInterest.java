import java.util.Scanner;
public class SimpleInterest{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the principal amount: ");
        float principal = sc.nextFloat();

        System.out.print("Enter the rate of interest(in percent): ");
        float rate = sc.nextFloat();

        System.out.print("Enter time(in years): ");
        float time = sc.nextFloat();

        float simpleinterest = (principal*rate*time)/100;

        System.out.println("Principal : "+ principal);
        System.out.println("Rate: "+ rate);
        System.out.println("time : "+ time);

        System.out.println("The simple interest is: "+simpleinterest);
        sc.close();

    }
}