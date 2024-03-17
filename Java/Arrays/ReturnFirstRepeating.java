import java.util.Scanner;

public class ReturnFirstRepeating {
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

     for(int i=0; i<n; i++){
        boolean flag = false; // flag false for every number
         for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
               flag = true; //if equal number found, turn flag true and break
               break;
           }
        }
        if(flag==true) {
            System.out.println(arr[i]+" is the first repeating number");
            break;
        }
     }
      
     sc.close();
    }
}
