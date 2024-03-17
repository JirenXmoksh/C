import java.util.Scanner;

public class TripletSumComparison {
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
     int Tripletcount = 0;

     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if((arr[i]+arr[j]+arr[k])==Tsum){
                Tripletcount++;
                System.out.println("("+arr[i]+","+arr[j]+","+arr[k]+")");
            }
            }
           
         }
     }System.out.println(Tripletcount+" triplets add up to give the Target sum");

        sc.close();
    }
}
