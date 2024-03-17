public class BasicArray {
    public static void main(String[] args) {
        // Array declaration:

        //String names[] = new String[3];, the keyword 'new' is for memory allocation
        //int age[] = new int[5];

        //  String names[] = {"Rahul", "Raj", "Aradhya"};
        
        //  System.out.println(names[0]);
        //  System.out.println(names[1]);
        //  System.out.println(names[2]);

         int ages[][] = {{34,21,44}, {6,7,8}, {89,100,101}};
         System.out.println(ages[0][0]);
         System.out.println(ages[0][1]);
         System.out.println(ages[0][2]);
System.out.println();
         System.out.println(ages[1][0]);
         System.out.println(ages[1][1]);
         System.out.println(ages[1][2]);
System.out.println();
         System.out.println(ages[2][0]);
         System.out.println(ages[2][1]);
         System.out.println(ages[2][2]);
System.out.println();
         System.out.println(ages.length); //This can be used to find the length of an array

    }
}
