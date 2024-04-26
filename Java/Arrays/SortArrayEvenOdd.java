import java.util.Scanner;

public class SortArrayEvenOdd {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the size of array: ");
        int n =sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter the elements: ");
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("The array is: ");
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
       

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
