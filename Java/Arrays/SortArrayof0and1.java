public class SortArrayof0and1 {
    public static void main(String[] args) {
        int arr[] = {1,0,0,1,0,1,1,0,0};
        //sort the array
        System.out.println("The array is: ");
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        // we count the number of 0s and then fill the remaining spaces with 1.

        int count = 0;
        for(int i=0; i<arr.length; i++){
            if(arr[i]==0) count++;
        }
        for(int i=0; i<arr.length; i++){
            if(i<count) arr[i] = 0;  
            else arr[i] = 1;          
        }
        
        System.out.println();
        System.out.println();
        System.out.println("The sorted array is: ");
         for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        
    }
    
}
