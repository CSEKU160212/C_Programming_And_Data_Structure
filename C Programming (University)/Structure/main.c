#include <stdio.h>
#include <stdlib.h>

struct student
{
    char Name[30];
    int roll;
    float cgpa;
};
int main()
{
    int i;
    struct student s[20];


   for(i=0; i<20; i++){
   scanf("%s%d%f", &s[i].Name, &s[i].roll, &s[i].cgpa);
   }

   printf("\n\n");

   for(i=0; i<20; i++){
   printf("\n%s\n%d\n%.2f\n", s[i].Name, s[i].roll, s[i].cgpa);
   }

    return 0;
}
