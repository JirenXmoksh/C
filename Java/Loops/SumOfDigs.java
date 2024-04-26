import java.util.Scanner;

public class SumOfDigs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        
        int digSum = 0;
        int dig;
        while(num!=0){
         dig = num % 10;
         digSum += dig;
         num/=10;
        }
        System.out.println("The sum of digits of the number entered is "+digSum);
        
        sc.close();
    }
}
