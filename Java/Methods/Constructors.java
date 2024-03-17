import java.util.Scanner;
class algebra{

   double a;  // Declare the variables to be used, globally
   double b;

   algebra(double x, double y){ //  create a constructor method, so that all the other
    // methods of this class recieve the same values
    System.out.println("Constructor of algebra class is called");
    a = x;
    b = y;
   }
    double add(){
        return a+b;
    }
    double sub(){
        return a-b;
    }
    double mul(){
        return a*b;
    }
    double div(){
        return a/b;
    }
        
}
public class Constructors {
    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        double a = sc.nextDouble();
        System.out.print("Enter second number: ");
        double b = sc.nextDouble();
        algebra al = new algebra(a,b);
        
        System.out.println("Sum: "+al.add());
        // double ans1 = al.add();
        // System.out.println(ans1);

        System.out.println("Difference: "+al.sub());
        // double ans2 = al.sub();
        // System.out.println(ans2);

        System.out.println("Product: "+al.mul());
        // double ans3 = al.mul();
        // System.out.println(ans3);

        System.out.println("Quotient: "+al.div());
        // double ans4 = al.div();
        // System.out.println(ans4);

sc.close();

    }

}
