import java.util.Scanner;

public class TriangleOrnot {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first side: ");
        int a = sc.nextInt();
        System.out.print("Enter second side: ");
        int b = sc.nextInt();
        System.out.print("Enter third side: ");
        int c = sc.nextInt();
       
        if((a+b)>c && (b+c)>a && (a+c)>b) System.out.println("Yes, a triangle can be formed from the given sides");
        
        else System.out.println("No, a triangle cannot be formed from the given sides");

sc.close();
}
}
