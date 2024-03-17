import java.util.Scanner;
public class ReadCharacter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // We will take input of a string and then print the '0th' element!

        System.out.print("Enter a character: ");
        char ch = sc.next().charAt(0);
        int ascii = (int)ch;
        System.out.println("The character you entered is: "+ch);
        System.out.println("The ASCII value of the character you entered is: "+ascii);
        sc.close(); 
    }
}