#include<stdio.h>
int main(){
    int class, fsub, grace;
    printf("Enter the class obtained and the number of failed subject as space seperated values: ");
    scanf("%d %d", &class, &fsub);
    switch (class) {
        case 1: 
            if(fsub>3) grace = 0;
            else grace = 5*fsub;
            break;
        
        case 2:
            if(fsub>2) grace = 0;
            else grace = 4*fsub;
            break;

        case 3:
            if(fsub>1) grace = 0;
            else grace = 3*grace;
    }
    printf("Grace marks obtained are: %d", grace);
    return 0;
}