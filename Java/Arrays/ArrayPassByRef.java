import java.util.Scanner;

public class ArrayPassByRef {
    static void PrintArray(int arr[]){
      for(int i=0; i<arr.length; i++){
        System.out.print(arr[i]+" ");
      }System.out.println();
    }
    static void ChangeArray(int arr[]){
        for(int i=0; i<arr.length; i++){
          arr[i] = 0;
        }System.out.println();
      }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        arr[0] = 5;
        arr[1] = 6;
        arr[2] = 7;
        arr[3] = 8;
        arr[4] = 9;

        System.out.println("Original array: ");
        PrintArray(arr);

        // Passing the array to the function
       ChangeArray(arr);
       System.out.println("The array after calling: ");
       PrintArray(arr);
// Oh shit, arrays are passed by Reference! :P
        sc.close();
    }
}