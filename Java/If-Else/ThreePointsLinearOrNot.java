import java.util.Scanner;

public class ThreePointsLinearOrNot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter x of first point:  ");
        double x1 = sc.nextDouble();
        System.out.print("Enter y of first point:  ");
        double y1 = sc.nextDouble();
        System.out.print("Enter x of second point:  ");
        double x2 = sc.nextDouble();
        System.out.print("Enter y of second point:  ");
        double y2 = sc.nextDouble();
        System.out.print("Enter x of third point:  ");
        double x3 = sc.nextDouble();
        System.out.print("Enter y of third point:  ");
        double y3 = sc.nextDouble();
         
        double m1 = (y2-y1)/(x2-x1);
        double m2 = (y3-y2)/(x3-x2);

        if(m1==m2){
            System.out.println("The points are collinear");
        }
        else System.out.println("The points are non collinear");

        sc.close();
    }
}
