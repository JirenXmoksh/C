import java.util.Scanner;
public class btod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the binary number: ");
        int binary = sc.nextInt();

        int num = binary;

        int decAns = 0; // converted num
        int multiplier = 1; // 2^0 = 1, power of 2
        int dig;

        while(binary!=0){
            dig = binary%10;        // Store the last digit
            decAns += dig*multiplier;  // Multiply the digit (Either 1 or 0) with the current power of 2 and add in decAns
            binary/=10;  // Reduce the number by one digit from the last
            multiplier*=2; // Increase the power of 2 by 1
        }
        System.out.println("The decimal of "+num+" is :"+decAns);
 //Also done in C/Strings/BinaryToDecimal
        sc.close();
    }
}
