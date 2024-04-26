import java.util.Scanner;

public class power {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the base: ");
        int base = sc.nextInt();
        System.out.println("Enter the exponent: ");
        int expo = sc.nextInt();

        int a=1;

        for(int i=1; i<=expo; i++){
             a = a*base;
        }
        System.out.println(base+" raise to  the power "+expo+" is: "+a);
        sc.close();

     }
}
