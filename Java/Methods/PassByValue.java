import java.util.Scanner;

class Function{
    void Swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
        System.out.println("The value of 'a' swapped in the called method: "+a);
        System.out.println("The value of 'b' swapped in the called method: "+b);
        return;

    }
}
public class PassByValue {
    public static void main(String[] args) {
        // We try to make a swap function
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first num: ");
        int a = sc.nextInt();
        System.out.print("Enter second num: ");
        int b = sc.nextInt();
        System.out.println();
        Function sw = new Function();
        System.out.println("The value of 'a' in main class before calling is "+a);
        System.out.println("The value of 'b' in main class before calling is "+b);
        // Now we call the swap function!
        System.out.println();
        System.out.println("The values after swapping: ");
        sw.Swap(a,b); // Variables are passed by Value, i.e.: Copies are sent
        System.out.println();
        System.out.println("The value of 'a' in main class after calling is "+a);
        System.out.println("The value of 'b' in main class after calling is "+b);


        


        sc.close();
    }
}
