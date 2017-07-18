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
    struct student s;
    scanf("%[^\n]%d%f",&s.Name,&s.roll,&s.cgpa);
    printf("%s\n%d\n%.2f\n",s.Name,s.roll,s.cgpa);
    getch();
}
