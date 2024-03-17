import java.util.Scanner;
public class SumTillN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number till you want your sum: ");
        int num = sc.nextInt();
        //int count = 0;
        int sum = 0;
        // while (count <= num) {
        //     sum+=count;
        //     count++;
        // } System.out.println(sum);

        for(int i=1; i<=num; i++){
            sum+=i;
        }System.out.println("The sum of numbers upto "+num+" is " +sum);
        sc.close();
    }
}
