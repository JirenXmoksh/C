 #include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int nst=n;
    int nsp=1;
    //Also we have to print the top line of the table, so for that:
    for(int p=1; p<=2*n+1; p++){
        printf("* ");
    }printf("\n");//This is a seperate loop.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){//stars
         printf("* ");
       }for(int k=1; k<=nsp; k++){//spaces
         printf("  ");
       }
       for(int j=1; j<=nst; j++){//stars again, because we are repeating the same thing as felt by the computer i.e. An inverted triangle(not right handed!)
         printf("* ");
       }nst--;
       nsp+=2;
         printf("\n");
   
}
 return 0;
 }
 