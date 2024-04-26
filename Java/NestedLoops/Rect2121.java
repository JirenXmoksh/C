import java.util.Scanner;
public class Rect2121{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();

        for(int i=1; i<=n; i++){
            for(int j=1; j<=6; j++){
                if((i+j)%2==0){
                    System.out.print(1);
                }else System.out.print(2);
            }System.out.println();
        }
        sc.close();
    }
    
}