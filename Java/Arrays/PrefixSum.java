import java.util.Scanner;

public class PrefixSum {

    static void printarray(int arr[]) {

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static int[] makeprefixSumArray(int arr[]) {
        int n = arr.length;
        int pref[] = new int[n];
        pref[0] = arr[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + arr[i];
        }
        return pref;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("The array is: ");
        printarray(arr);
        System.out.println();

        int pref[] = makeprefixSumArray(arr);

        System.out.println("The prefix sum array is: ");
        printarray(pref);

        sc.close();

    }
}
