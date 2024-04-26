import java.util.Arrays;
import java.util.Scanner;

public class FirstSmSecondLg {
    static int[] SmallestAndLargestElement(int arr[]){
              Arrays.sort(arr); 

            //Displaying the sorted array
            //   System.out.println("The sorted array is: ");
            //   for(int i=0; i<n; i++){
            //     System.out.print(arr[i]+" ");
            //   }
            //   System.out.println();

            // Printing the required array

              System.out.println("The required array is: ");

              int ansArr[] = {arr[0], arr[arr.length-1]};
              return ansArr;
              
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter elements: ");
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("The array is: ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.println();
        
        int ansArr[] = SmallestAndLargestElement(arr);
        System.out.println(ansArr[0]+","+ansArr[1]);

        sc.close();
    }
}
