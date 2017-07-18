/* C program to find the sum marks of n students using arrays */

#include <stdio.h>
int main()
{
    int marks[1000],i,n,sum=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        printf("Enter marks of student%d: ",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    double avg = sum/n;
    printf("Sum= %d\nAverage = %.2lf",sum,avg);
    return 0;
}
