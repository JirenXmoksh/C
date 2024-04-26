import java.util.Scanner;

public class PointOnAxesOrOrigin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter x coordinate: ");
        double x = sc.nextDouble();
        System.out.println("Enter the y coordinate: ");
        double y = sc.nextDouble();
 
        if(x==0 && y==0) System.out.println("The point lies on the origin");
        else if(x==0) System.out.println("The point lies on the y axis");
        else if(y==0) System.out.println("The point lies on the x axis");
        else System.out.println("The point lies in the plane");
        
        sc.close();
    }
}
