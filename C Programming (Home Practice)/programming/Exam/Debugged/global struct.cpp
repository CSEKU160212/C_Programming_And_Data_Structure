#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int id;
    char dep_nam[20];
    double gpa;
} niton = {"Sakeef",150217,"CSE",3.50};
int main()
{
    printf("\nName : %s",niton.name);
    printf("\nID : %d",niton.id);
    printf("\nDEP NAME : %s",niton.dep_nam);
    printf("\nGPA : %lf",niton.gpa);


}
