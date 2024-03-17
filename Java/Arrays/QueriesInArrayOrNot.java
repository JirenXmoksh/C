import java.util.Scanner;

public class QueriesInArrayOrNot {
    static int[] makefreqarray(int arr[]){
        int freqArr[] = new int[100001]; // it is given that there cannot be a number greater than 10pow5 in our array

        for(int i=0; i<arr.length; i++){
            freqArr[arr[i]]++;

        }
        return freqArr;

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

     // creating a frequency array
     int freqArr[] = makefreqarray(arr);


     System.out.println("Enter number of queries: ");
     int q = sc.nextInt();

     for(int i=0; i<q; i++){
        System.out.println("Enter the number to be searched");
        int x = sc.nextInt();
        if(freqArr[x]>0) System.out.println("Yes, the number is present");
        else System.out.println("No, the number is not present");
     }
    

     


     sc.close();
    }
    
}
