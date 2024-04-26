#include<stdio.h>

void tower(int n, char s, char h, char d);

int main(){
    int n;
    printf("Enter number of discs: ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');//Source rod is at A, helper rod is at B, destination rod is at C
    return 0;
}
void tower(int n, char s, char h, char d){
    if(n==0) return;
    tower(n-1, s, d, h); // We are shifting (n-1) discs from source to helper using destination thats why 'd' and 'h' are interchanged. We are using destination as helper.
    printf("%c -> %c\n", s, d); // Shifting the base disc(s) to the 'C' position, or shifting the base disc at source(at that time, it can actually be helper rod) to the destination(at that time).
    tower(n-1,h,s,d ); // Now our source is the second rod(helper) and helper is the first rod(source) while destination remains the same.
    return;
}
//Explanation:
// Suppose we put n=3, it calls (n-1) to shift the triangle of 2 discs to the 'h' @ 'B', assuming it to be the 'd' @ 'C' from 's' @ 'A'
// so the order becomes s,h,d.
// Then (n-1) '2 disc' triangle is called again, this time the 'h' is at 'A', 's' is at 'B' and 'd', is at 'C'
// This is the fundamental pattern, for higher number of discs, this is called at last when (n-1) is called again and again,
// hence the problem is solved in a reverse way, i.e. beginning from the start all the way to the end, infact that is how recursion works! 

// Not the best explained but we will try again...