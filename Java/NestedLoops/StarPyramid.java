import java.util.Scanner;

public class StarPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows we want in our star pyramid: ");
   
        int n = sc.nextInt();
        int nst = 1;
        int nsp = n-1;
        for(int i=1; i<=n; i++){
            for(int j = 1; j<=nsp; j++){
                System.out.print("   ");
            }nsp--;
            for(int k=1; k<=nst; k++){
                System.out.print("* ");
            }nst+=2;
            System.out.println();
        }
        sc.close();
    }
}
