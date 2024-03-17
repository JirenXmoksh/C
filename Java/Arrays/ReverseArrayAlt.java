import java.util.Scanner;

public class ReverseArrayAlt {

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

     // changing values
     for(int i=0,j=n-1; i<j; i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];  
        arr[j] = temp;
     }
     
     System.out.println("The reversed array is: ");
     for(int i=0; i<n; i++){
        System.out.print(arr[i]+" ");
     }


     sc.close();
    }
}
