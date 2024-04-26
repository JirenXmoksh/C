#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
      int rollNUm;
      char firstname[35];
      char lastname[35];
      char dep[30];
      char course[30];
      int YoJ;

}student;
void checkDep(student s1, student s2){
    int k = 0;
    int size1 = 0;
    int p =0;
    int size2=0;
    int sizeb;
    while(s1.dep[k]!='\0'){
        size1++;
        k++;
    }
    while(s2.dep[p]!='\0'){
        size2++;
        p++;
    }
    if(size1>size2) sizeb=size1;
    else sizeb = size2;
    bool flag = false;
   for(int i=0; i<sizeb; i++){

     if(s1.dep[i]==s2.dep[i]) flag = true;
     else flag = false;
        }
        
        if(flag==true) printf("They have same departments");
        else printf("They have different departments");
    return;
}

int main(){
       student s1;
       printf("Details for student 1\n\n");
    //    printf("Enter roll number: ");
    //    scanf("%d", &s1.rollNUm);
    //    printf("Enter first name: ");
    //    scanf("%s", s1.firstname);
    //    printf("Enter last name: ");
    //    scanf("%s", s1.lastname);
       printf("Enter department: ");
       scanf("%s", s1.dep);
    //    printf("Enter course: ");
    //    scanf("%s", s1.course);
    //    printf("Enter year of joining: ");
    //    scanf("%d", &s1.YoJ);
          printf("\n");
       student s2;
    //    printf("Details for student 2\n\n");
    //    printf("Enter roll number: ");
    //    scanf("%d", &s2.rollNUm);
    //    printf("Enter first name: ");
    //    scanf("%s", s2.firstname);
    //    printf("Enter last name: ");
    //    scanf("%s", s2.lastname);
       printf("Enter department: ");
       scanf("%s", s2.dep);
    //    printf("Enter course: ");
    //    scanf("%s", s2.course);
    //    printf("Enter year of joining: ");
    //    scanf("%d", &s2.YoJ);

     checkDep(s1,s2);
return 0;
    return 0;
}