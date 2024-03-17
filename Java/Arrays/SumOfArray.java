public class SumOfArray {
    public static void main(String[] args) {
        int arr[] = {3,4,7,3,21,8,9,44,3,4};
        int sumArr = 0;
        for(int i=0; i<arr.length; i++){
            sumArr+=arr[i];
        }
        System.out.println("The sum of the array is "+sumArr);
    }
}
