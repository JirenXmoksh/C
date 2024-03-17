import java.util.Scanner;

public class DivBy3Or5 {
    public static void main(String[] args){
         
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = sc.nextInt();

        if(num%5==0 || num%3==0) System.out.println("Number divisble by 3 or 5: "+ num);
        sc.close();
    }
}
