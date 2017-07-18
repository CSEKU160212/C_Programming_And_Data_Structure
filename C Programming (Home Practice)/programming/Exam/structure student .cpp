#include<stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int year,term;
        double CGPA;
    };
    struct student s1;
    printf("Input name:");
    gets(s1.name);
    printf("Input Year: ");
    scanf("%d",&s1.year);
    printf("Input term: ");
    scanf("%d",&s1.term);
    printf("\nStudent Name: %s",s1.name);
    printf("\nYear: %d",s1.year);
    printf("\nTerm: %d",s1.term);


}
