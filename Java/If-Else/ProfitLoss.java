import java.util.Scanner;

public class ProfitLoss {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the cost price: ");
        double cp = sc.nextDouble();
        System.out.print("Enter the selling price: ");
        double sp = sc.nextDouble();
        if(cp>sp){
            System.out.println("Loss of "+(cp-sp)+" has been incurred");
        }else {
            System.out.println("Profit of "+(sp-cp)+" has been made");
        }
        sc.close();
    }
}
