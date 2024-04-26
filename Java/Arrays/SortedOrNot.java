import java.util.Scanner;

public class SortedOrNot {
    static void SortedorNot(int arr[], int n){
        boolean flag = false;
        for(int i=1; i<n; i++){
              if(arr[i-1]<=arr[i]){
              flag = true;
              }
              else {
                flag = false;
                break;
              } 
        }
        if(flag == true) System.out.println("Yes the array is sorted");
        else System.out.println("Array is not sorted");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
       

        int arr[] = new int[n];

        // Taking inputs

        System.out.print("Enter the values: ");
        for(int i=0; i<n; i++){
             arr[i]= sc.nextInt();
        }
        // Displaying the array
        System.out.println("The array is: ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        SortedorNot(arr, n);
        sc.close();
    }
}
