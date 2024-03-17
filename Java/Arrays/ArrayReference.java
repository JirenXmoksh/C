import java.util.Scanner;

public class ArrayReference {
    static void PrintArray(int arr[]){
      for(int i=0; i<arr.length; i++){
        System.out.print(arr[i]+" ");
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

        // int arr2[] = arr; // Shallow copying, the addresses are shared!!

        // System.out.println("Copied array: ");
        // PrintArray(arr2);
        // //changing elements
        // arr2[0] = 1;
        // arr2[1] = 1;

        // System.out.println("Original array after changing arr2: ");
        // PrintArray(arr);

        // System.out.println("arr2 after changing arr2: ");
        // PrintArray(arr2);

        // System.out.println();
        //Problem: But we do not want the changes to reflect in our original array :(
        //solution: Array cloning i.e.: Deep Copying

        int arrClone[] = arr.clone();
        // or int arrClone = Arrays.copyOf(arr, arr.length);

        arrClone[0] = 1;
        arrClone[1] = 1;

        System.out.println("arr2 after changing arr2");
        PrintArray(arrClone);

        System.out.println("Original array: ");
        PrintArray(arr);

        sc.close();
    }
}
