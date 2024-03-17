import java.util.Scanner;

public class SortArrayOf0and1Opt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int n =sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter the elements as 0s or 1s: ");
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }

        //sorting the array

        System.out.println("The array is: ");
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        // we count the number of 0s and then fill the remaining spaces with 1.

        System.out.println();
        System.out.println("The sorted array is: ");
        int i=0, j=n-1;
        while(i<j){
            if(arr[i]%2==1 && arr[j]%2==0){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }  
            if(arr[j]%2==1)  {
                j--;
            }  
            if(arr[i]%2==0 )  {
                i++;
            }   
        }

        for(int k=0; k<arr.length; k++){
            System.out.print(arr[k]+" ");
        }  
        
        
        sc.close();
    }
    
}
