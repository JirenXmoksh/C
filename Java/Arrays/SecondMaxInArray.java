import java.util.Scanner;

public class SecondMaxInArray {
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

        int max = Integer.MIN_VALUE;
        int smax = Integer.MIN_VALUE;

        for(int i=0; i<n; i++){
            if(arr[i]>max)
            max = arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i]>smax && arr[i]!=max)
            smax = arr[i];
        }
        System.out.println(smax+" is the second largest in the array while "+max+" is the largest");

        sc.close();
    }
}
