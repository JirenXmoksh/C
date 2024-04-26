import java.util.Scanner;

class Algebra{
    double Add(double a, double b){
    double ans = a + b;
        return ans;
    }
}

public class Main{
       public static void main(String[] args) {
        Algebra obj = new Algebra(); //Making object of the Algebra class so as to use the Algebra Class
        Scanner sc = new Scanner(System.in);

         System.out.print("Enter first number: ");
         double num1 = sc.nextDouble();
         System.out.print("Enter second number: ");
         double num2 = sc.nextDouble();
// We have a method 'Add' in the 'Algebra' class, so we gotta call the 'Add' method through the object made earlier
// This is analogous to the scanner class, like how we make an object of it first then use it to take inputs 
        
        System.out.print("The sum of numbers input is: ");
        double ans = obj.Add(num1, num2);
        System.out.println (ans);
       
        System.out.println(Math.sqrt(24));
        System.out.println(Math.sqrt(16));

        System.out.println(Math.floor(67.89));
        System.out.println(Math.ceil(3.123));
         sc.close();
    }
}
