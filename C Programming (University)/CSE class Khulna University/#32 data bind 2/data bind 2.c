#include<stdio.h>
#include<conio.h>

struct student
{
    char Name[30];
    int roll;
    float cgpa;
};
int main()
{
    int i;
    struct student s[5];
    for(i=0;i<5;i++)
    {
        scanf("%s%d%f",&s[i].Name,&s[i].roll,&s[i].cgpa);
    }
    for(i=0;i<5;i++)
    {
        printf("%s %d %.2f\n",s[i].Name,s[i].roll,s[i].cgpa);
    }
    getch();
}
