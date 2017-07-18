#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    typedef struct student
    {
       char name[100];
       int roll;
       double cgpa;
    };
    student a[50];
    for(int i=0;i<50;i++)
    {
        gets(a[i].name);
        fflush(stdin);
        cin>>a[i].roll>>a[i].cgpa;
        fflush(stdin);
    }
    double maxgpa = a[0].cgpa;
    int index=0;
    for(int i=1;i<50;i++)
    {
        if(a[i].cgpa>maxgpa)
            maxgpa = a[i].cgpa;
        index = i;
    }

    cout<<"Student Name: "<<a[index].name<<endl;
    cout<<"Student Roll: "<<a[index].roll<<endl;
    cout<<"Student CGPA: "<<a[index].cgpa<<endl;
}
