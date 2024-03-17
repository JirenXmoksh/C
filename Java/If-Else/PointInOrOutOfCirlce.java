import java.util.Scanner;

public class PointInOrOutOfCirlce {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the x coordinate of the center of the circle: ");
        double x = sc.nextDouble();
        System.out.print("Enter the y coordinate of the center of the circle: ");
        double y = sc.nextDouble();
        System.out.print("Enter the radius: ");
        double r = sc.nextDouble();
        System.out.print("Enter the x coordinate of the point: ");
        double x1 = sc.nextDouble();
        System.out.print("Enter the y coordinate of the point: ");
        double y1 = sc.nextDouble();  

        r = r*r; // squaring the radius, as we cannot put sqrt here

        double dist = (x1-x)*(x1-x) + (y1-y)*(y1-y); 
        if(r>dist) System.out.println("The point lies INSIDE the circle");
        else if(r<dist) System.out.println("The point lies OUTSIDE the circle");
        else System.out.println("The point lies ON the circle");

        sc.close();
    }
}
