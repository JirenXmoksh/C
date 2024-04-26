import java.util.Scanner;

public class NumTriangleRpt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();
        int nsp = n-1;
        
        //int a;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=nsp; j++){
                System.out.print(" ");
            }nsp--;
            for(int k=1; k<=i; k++){
                System.out.print(k);
            }
            // a = i-1;
            // for(int l=2; l<=i; l++){
            //     System.out.print(a);
            //     a--;
            // }
            for(int l=i-1; l>=1; l--){
                System.out.print(l);
            }
            System.out.println();
        }
        sc.close();
    }
}
