public class PrintAllExceptMultOf3 {
    public static void main(String[] args) {
        // for(int i=0; i<=50; i++){
        //     if(i%3==0) continue;
        //     else System.out.println(i);
        // }
        int num = 1;
        while(num<=50){
            if(num%3==0)  {
                num++; continue; // Even if continuing, add 1 to num
            }
            else {
                System.out.println(num);   
        } num++;
    }
}
} 