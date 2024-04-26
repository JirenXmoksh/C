import java.util.Scanner;

public class EvenOddSubAdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number upto which the sum is to be calculated: ");
        int num = sc.nextInt();
        int sum = 0;
        for(int i=0; i<=num; i++){
            if(i%2==0) sum -= i;
            else sum += i;
        }System.out.println("The sum of this series is: "+sum);

        sc.close();
}
}
