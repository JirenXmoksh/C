import java.util.Scanner;

public class PrefixSuffixSubArrays {

    static int findArrSum(int arr[]){
         int totalSum = 0;
        for(int i=0; i<arr.length; i++){
            totalSum+=arr[i];
        }
        return totalSum;
    }

    static boolean checkSubArr(int arr[]){
        int totalSum = findArrSum(arr);
        int prefSum = 0;

        for(int i=0; i<arr.length; i++){
           prefSum += arr[i];
           int suffixSum = totalSum - prefSum;
           if(suffixSum == prefSum) return true;
          
        }
        return false;
    }
    static void printarray(int arr[]) {

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
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
     printarray(arr);

     boolean ans = checkSubArr(arr);
     System.out.println("Equal partition possible: "+ans);

     sc.close();
     
     }
}
