#include<stdio.h>
#include<string.h>

void xleft(char* mess, char* newmess, int n);
void xright(char* mess, char* newmess, int n);
void xsubstr(char* mess, char* newmess, int n, int m);

int main(){

    char mess[] = "Do not blame me, I never voted VP";
    char newmess[7];

    xleft(mess, newmess, 6); // print the first 6 letters of the string: Do not
    printf("\n%s", newmess);

    xright(mess, newmess, 6);
    printf("\n%s", newmess);

    xsubstr(mess, newmess, 8, 5);
    printf("\n%s", newmess);

    return 0;
}
void xleft(char* mess, char* newmess, int n){
    int i;
    for(i=0; i<n; i++){
        newmess[i] = mess[i];
    }
    newmess[i] = '\0';
    
}
void xright(char* mess, char* newmess, int n){

    int a = 0;
    for(int i=strlen(mess)-n; i<strlen(mess); i++){
        newmess[a++] = mess[i];
    }

}
void xsubstr(char* mess, char* newmess, int n, int m){
    int a = 0;
    int i;
    for(i=n-1; i<n+m; i++){
        newmess[a++] = mess[i];
    }
    newmess[i] = '\0';

}
