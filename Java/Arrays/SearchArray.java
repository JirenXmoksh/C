public class SearchArray {
    public static void main(String[] args) {
        int arr[] = {2,3,56,1,2};
        int x = 5;
        //int y = 1;
        int index = -1;
        boolean flag = false;
        for(int i=0; i<arr.length; i++){
            if(arr[i]==x){
                flag = true;
                index = i;
                break;
            }
        }
            if(flag == true){
                System.out.println("Yes, our number "+x+" present in the aray at "+index);
            }
            else {System.out.println("Not found");
                
            }
    
}
}
