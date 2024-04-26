import java.util.Scanner;
public class AreaOfCircle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
      
        System.out.print("Enter the radius(in cm): ");
        double r = sc.nextDouble();

        System.out.println("The area of the circle is(sq cm): " + (3.14*r*r));
        sc.close();
    }
}
