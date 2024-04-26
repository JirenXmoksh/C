import java.util.Scanner;

public class ReverseArray {
    static int[] revArr(int arr[]){
        int n = arr.length;
        int ansArr[] = new int[n];
        int j = 0;
        for(int i=n-1; i>=0; i--){
            ansArr[j++] = arr[i];
        }
        return ansArr;
        
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
     for(int i=0; i<n; i++){
        System.out.print(arr[i]+" ");
     }
     System.out.println();

     int ansArr[] = revArr(arr);
     System.out.println("The reversed array is: ");

     for(int i=0; i<n; i++){
        System.out.print(ansArr[i]+" ");
     }
     
     sc.close();
        
    }
}
