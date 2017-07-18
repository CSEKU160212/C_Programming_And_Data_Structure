#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    typedef struct student{
        char name[100];
        int roll;
        double gpa;
    };

    student a[50];
    for(int i = 0; i<2; i++){
        gets(a[i].name);
        fflush(stdin);
        cin>>a[i].roll>>a[i].gpa;
        fflush(stdin);
    }

    double maxgpa = a[0].gpa;
    int index = 0;
    for(int i = 1; i<2; i++)
        if(a[i].gpa>maxgpa){
            maxgpa = a[i].gpa;
            index = i;
        }

    cout<<"Student name\t: "<<a[index].name<<endl;
    cout<<"Student Roll\t: "<<a[index].roll<<endl;
    cout<<"Student GPA\t: "<<a[index].gpa<<endl;
}
