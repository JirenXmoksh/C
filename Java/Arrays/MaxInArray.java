public class MaxInArray {
    public static void main(String[] args) {
        int arr[] = {8,3,6,2,7,100};
        int max = arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }System.out.println("The maximum value from the array is: "+max);
    }
}
