import java.util.Scanner;

public class NumRectRptRow {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();

      
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){ // for each row, we are printing numbers from 'i' to 'n' and then from '1' to 'i-1'
                System.out.print(j);
            }
            for(int k=1; k<=(i-1);k++){
                System.out.print(k);
            }
            System.out.println();
        }
        sc.close();
     }
}
