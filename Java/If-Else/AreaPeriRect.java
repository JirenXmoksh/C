import java.util.Scanner;

public class AreaPeriRect {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter breadth: ");
        double b = sc.nextDouble();
        System.out.print("Enter length: ");
        double l = sc.nextDouble();

        if((l*b) > (2*(l+b)) ) System.out.println("Area is greater than the perimeter");
        else if((l*b) == (2*(l+b)) ) System.out.println("Both are equal");
        else System.out.println("Perimeter is greater than the area");
        
        sc.close();
    }  

}
