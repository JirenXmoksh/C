import java.util.Scanner;

public class RotateArrayByKAlt {
    static int[] rotatebyk(int arr[], int k){
        int n = arr.length;
        if(k>n) k = k%n;
        int j = 0;
        int ans[] = new int[n];

        for(int i=n-k; i<n; i++){
            ans[j++]=arr[i];            
        }
        for(int i=0; i<n-k; i++){
            ans[j++]=arr[i];            
        }
        return ans;
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

     System.out.println("Enter the rotations to be given to the array: ");
     int k = sc.nextInt();

     int ans[] = rotatebyk(arr, k);
     System.out.println("The array rotated by "+k+" steps is: ");

     for(int i=0; i<n; i++){
        System.out.print(ans[i]+" ");        
     }
     
     sc.close();
    }
}
