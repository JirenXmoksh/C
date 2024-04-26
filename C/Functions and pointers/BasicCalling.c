#include<stdio.h>
void england();
void india();
void australia();
int main(){
    india();
    return 0;
}
void india(){
    printf("You are in India!\n");
    australia();
    return;
}
void australia(){
    printf("You are in Australia!\n");
    england();
    return;
}
void england(){
    printf("You are in England!\n");
    return;
}

