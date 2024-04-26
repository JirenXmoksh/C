import java.util.Scanner;

public class DivBy5or3ButNot15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        if(num%5==0 || num%3==0){
            if(num%15!=0){
                System.out.println("The number is divisible either by 5 or 3 but not by 15");
            }
            else {
            System.out.println("The number is divisible by 5 or 3 and also by 15");
            }
        }else{
            System.out.println("The number is neither divisible by 5 nor 3");
        }
        sc.close();
    }
}
