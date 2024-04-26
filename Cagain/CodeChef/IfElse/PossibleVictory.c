#include <stdio.h>

int main(void) {
	// your code goes here
    int targetscore, oversplayed, currentscore;
    printf("Enter the Target score, overs played and the current score of the Chef's team: ");
    scanf("%d %d %d", &targetscore, &oversplayed, &currentscore);
    if(targetscore < (currentscore + 6*6*(20-oversplayed) ) ) printf("Yes, Chef's team can win :D\n");
    else printf("No, it is not possible for the Chef's team to win :(\n");
}

