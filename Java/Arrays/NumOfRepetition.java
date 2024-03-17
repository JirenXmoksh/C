import java.util.Scanner;

public class NumOfRepetition {
  static void countocc(int arr[][], int x, int r, int c){
    int count = 0;
for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){
            if(arr[i][j] == x){
              count++;
            }
         }
      }
      System.out.println(x+" appeared "+count+" times ");
      
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int c = sc.nextInt();
        System.out.print("Enter the number we want to count: ");
        int x = sc.nextInt();
        //int count = 0;

        int arr[][] = new int[r][c];

        // Taking inputs

        System.out.print("Enter the values: ");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                arr[i][j] = sc.nextInt();
            }
        }
        // Displaying the array
        System.out.println("The array is: ");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                System.out.print(arr[i][j]+" ");
            }System.out.println();
        }countocc(arr, x,r,c); // making a method to use for the purpose is an efficient practice

      //   for(int i=0; i<r; i++){
      //     for(int j=0; j<c; j++){
      //       if(arr[i][j] == x){
      //         count++;
      //       }
      //    }
      // }
              //System.out.print(x+" appeared "+count+" times in the array");

        sc.close();
    }
}
