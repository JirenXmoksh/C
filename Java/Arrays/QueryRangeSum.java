import java.util.Scanner;
// Good question!
// We have to work on 1 based indexing

public class QueryRangeSum {
    static void printarray(int arr[]) {

        for (int i = 1; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    static int[] makeprefixSumArray(int arr[]){
        arr[0] = arr[0];
        for(int i=1; i<arr.length; i++){
            arr[i]+=arr[i-1];
        }
        return arr;

    }
    static int querySum(int arr[], int l, int r){
        return arr[r] - arr[l-1]; // The array is now a prefix sum array
                                  // so we can do direct operations
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n + 1];

        System.out.println("Enter elements: ");
        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
        }System.out.println();
        System.out.println("The array is: ");
        printarray(arr);
        System.out.println();
        System.out.println();

        makeprefixSumArray(arr);
        System.out.println("The prefix sum array is: ");
        printarray(arr);
        System.out.println();
        System.out.println();


        System.out.print("Enter the number of queries: ");
        int q = sc.nextInt();
        System.out.println();

       
        for(int i=0; i<q; i++){
             System.out.println("Enter l (starting index): ");
             int l = sc.nextInt();

             System.out.println("Enter r (ending index): ");
             int r = sc.nextInt();

             System.out.println();

            System.out.println("Sum: ");
            int ans = querySum(arr, l, r);

            System.out.println(ans);
        }

        


        sc.close();
    }
}
