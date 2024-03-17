// Good question
import java.util.Scanner;

public class SortSquares {

    static void printarray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
    }

    static int[] sortSqArr(int arr[]){
     int n = arr.length;

     int i=0, j=arr.length-1;
     int ans[] = new int[n];
     //int k = 0;
     int k = n-1;// for the answer array

     while(i<=j){
        if(Math.abs(arr[i]) > Math.abs(arr[j])){
            //ans[k++] = arr[i]*arr[i];
            ans[k--] = arr[i]*arr[i];
            i++;
        }
        else {
            //ans[k++] = arr[j]*arr[j];
            ans[k--] = arr[j]*arr[j];
            j--;
        }
     }
     return ans;

    }

    // static void reversearray(int arr[]){
    //     for(int i=0,j=arr.length-1; i<j; i++,j--){
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //     }
    // }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
     System.out.print("Enter the size of array: ");
     int n = sc.nextInt();
     int arr[] = new int[n];

     System.out.println("Enter elements in non-decreasing order only: ");
     for(int i=0; i<n; i++){
        arr[i] = sc.nextInt();
     }
     System.out.println("The array is: ");
     for(int i=0; i<n; i++){
        System.out.print(arr[i]+" ");
     }
     System.out.println();

     int ans[] = sortSqArr(arr);
     
     System.out.println("The required sorted array: ");
     //reversearray(ans);
     printarray(ans);
      
     sc.close();
    }
}
