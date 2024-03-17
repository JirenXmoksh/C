import java.util.Scanner;

public class SwapAlt {

    static void Swap(int a, int b){

        System.out.println("Values before swapping: ");
        System.out.println("a: "+a);
        System.out.println("b: "+b);
        
        a = a + b;
        b = a - b;
        a = a - b;
              
        System.out.println("Values after swapping: ");
        System.out.println("a: "+a);
        System.out.println("b: "+b);

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.println("Enter second number: ");
        int num2 = sc.nextInt();

        Swap(num1,num2);

        sc.close();
    }
    
}
