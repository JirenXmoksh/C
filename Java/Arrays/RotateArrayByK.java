import java.util.Scanner;

public class RotateArrayByK {
    static void RotateByK(int arr[], int a, int b){
        for(int i=a, j=b; i<j; i++,j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
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

     System.out.print("Enter the number of rotations we want to give to the array: ");
     int k = sc.nextInt();
     if(k>n)
     k = k%n;
     RotateByK(arr, 0, n-1);
     RotateByK(arr, 0, k-1);
     RotateByK(arr, k, n-1);

     System.out.println("The array rotated by "+k+" steps is: ");
     for(int i=0; i<n; i++){
        System.out.print(arr[i]+" ");
     }


     sc.close();
     }
}
