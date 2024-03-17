public class TraversingAnArray {
    public static void main(String[] args) {
        //int arr[] = {1,2,3,4,5};

        // for(int i=0; i<(arr.length); i++){
        //     System.out.println(arr[i]);
        // }

        //int ages[] = {23,45,64,76,29};
        // for(int age : ages){  // For-each loop, can only be used to print the whole array, unlike for loop
        //     System.out.print(age+", ");
        // }
        
        // int i=0;
        // while(i<(ages.length)){
        //     System.out.println(ages[i]);
        //     i++;
        // }

        double weights[][] = {{23.4, 65.2, 78.90}, {45.67, 88.9, 41.09}};
        for(int i=0; i<(weights.length); i++){
            //traversing outer elements
            for(int j=0; j<(weights[i].length); j++){
            //traversing inner elements, we can print a staggered array with this functionality also!
                System.out.print(weights[i][j]+" ");
            }System.out.println();
        }


    }
}
