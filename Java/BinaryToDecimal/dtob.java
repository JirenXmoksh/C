import java.util.Scanner;

public class dtob {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a decimal number: ");
        int decimal = sc.nextInt();
        int num = decimal;

        int binAns = 0;
        int multiplier = 1; // Powers of 10

        while(decimal!=0){
            int parity = decimal%2;     // Find the parity first by dividing the decimal num by 2
            binAns += parity*multiplier; // Multiply the parity by the current power of 10 and add in binAns
            multiplier*=10; // Increase power of 10 by 1
            decimal/=2;   // Divide by 2
        }

        System.out.println("The binary of "+num+" is: "+binAns);
        sc.close();
    }
    
}
