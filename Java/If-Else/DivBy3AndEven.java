import java.util.Scanner;

public class DivBy3AndEven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = sc.nextInt();

        if(num%2==0 && num%3==0) System.out.println("Number even as well as divisble by 3: "+ num);
        sc.close();
    }
}
