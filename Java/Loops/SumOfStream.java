import java.util.Scanner;

public class SumOfStream {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int sum = 0;
        System.out.println("If you enter -1, the sum will be returned");
        while(n!=(-1)){
            sum+=n;
            n = sc.nextInt();
       }System.out.println("The sum is "+sum);
       sc.close();
    }
}
