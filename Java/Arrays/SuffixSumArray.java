import java.util.Scanner;

public class SuffixSumArray {
     static void printarray(int arr[]) {

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    static int[] makesuffixSumArray(int arr[]) {
        int n = arr.length;
        
        arr[n-1] = arr[n-1];
        for (int i = n-1; i >= 1; i--) {
            arr[i-1] += arr[i] ;
        }
        return arr;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("The array is: ");
        printarray(arr);
        System.out.println();

        makesuffixSumArray(arr);
        System.out.println("The suffix sum array made by changing the parent array: ");
       
        printarray(arr);

        sc.close();
    }
}
