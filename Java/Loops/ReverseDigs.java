import java.util.Scanner;

public class ReverseDigs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number to be reversed: ");
        int num = sc.nextInt();
        int Revnum = 0;
        int dig;

        while(num!=0){
            dig = num%10;
            Revnum = Revnum*10 + dig;
            num/=10;            
        }
        System.out.println("The reversed number is: "+Revnum);

        sc.close();
    }
}
