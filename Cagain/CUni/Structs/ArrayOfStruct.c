// WE HAVE TWO WAYS TO CREATE ARRAY OF STRUCTURES


// #include<stdio.h>
// int main(){
//     typedef struct books{
//         char bname[20];
//         int pages;
//         float price;
//     } books; // array for three books

//     books books[3]; 
//     for(int i=0; i<3; i++){
//         printf("\nEnter the name of book %d: ", i+1);
//         scanf("%s", &books[i].bname);

//         printf("Enter the pages of book %d: ", i+1);
//         scanf("%d", &books[i].pages);

//         printf("Enter the price of book %d: ", i+1);
//         scanf("%f", &books[i].price);
//     }
//     printf("\n");
//     // displaying the struct

//     for(int i=0; i<3; i++){
//         printf("\nThe name of book %d is %s: \n", i+1, books[i].bname);

//         printf("The pages in book %d are: %d\n", i+1, books[i].pages);

//         printf("The price of the book %d is: %f\n", i+1, books[i].price);
//     }


//     return 0;
// }
#include<stdio.h>
int main(){
    struct books{
        char bname[20];
        int pages;
        float price;
    } books [3]; // array for three books

 
    for(int i=0; i<3; i++){
        printf("\nEnter the name of book %d: ", i+1);
        scanf("%s", &books[i].bname);

        printf("Enter the pages of book %d: ", i+1);
        scanf("%d", &books[i].pages);

        printf("Enter the price of book %d: ", i+1);
        scanf("%f", &books[i].price);
    }
    printf("\n");
    // displaying the struct

    for(int i=0; i<3; i++){
        printf("\nThe name of book %d is %s: \n", i+1, books[i].bname);

        printf("The pages in book %d are: %d\n", i+1, books[i].pages);

        printf("The price of the book %d is: %f\n", i+1, books[i].price);
    }


    return 0;
}