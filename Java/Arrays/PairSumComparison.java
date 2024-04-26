import java.util.Scanner;

public class PairSumComparison {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);

     System.out.print("Enter the size of array: ");
     int n = sc.nextInt();
     int arr[] = new int[n];

     System.out.println("Enter elements: ");
     for(int i=0; i<n; i++){
        arr[i] = sc.nextInt();
     }
     System.out.println("The array is: ");
     for(int i=0; i<n; i++){
        System.out.print(arr[i]+" ");
     }
     System.out.println();
     System.out.print("Enter the target sum: ");
     int Tsum = sc.nextInt();
     int Paircount = 0;

     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])==Tsum){
                Paircount++;
                System.out.println("("+arr[i]+","+arr[j]+")");
            }
         }
     }System.out.println(Paircount+" pairs add up to give the Target sum");

        sc.close();
    }
}
