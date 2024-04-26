import java.util.Scanner;


public class CountDigs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        
        int count = 0;
        while(num!=0){
            num/=10;
            count++;
        }
        System.out.println("The number of digits in the entered number are "+ count);
        sc.close();
    }
}
