import java.util.Scanner;

public class LastOccurence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int c = sc.nextInt();       

        int index1 = -1;
        int index2 = -1;

        int arr[][] = new int[r][c];
        // Taking inputs
        System.out.println("Enter the elements");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                arr[i][j] = sc.nextInt();
            }
        }// Displaying
        System.out.println("The array is: ");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                System.out.print(arr[i][j]+" ");
            }System.out.println();        
    }
        System.out.print("Enter the number whose last occurence is to be noted: ");
        int x = sc.nextInt();

    System.out.println();
    // Finding the last occurence
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]==x){
             index1 = i;
             index2 = j;
            }
        }
    }
    System.out.println(x+" last occured at index "+"("+index1+ ","+index2+")");

    sc.close();
}
}
