#include<stdio.h>

#include<conio.h>

#define MAX 10

void main()

{

int i,roll,m1,m2,m3,sub1[MAX],sub2[MAX],sub3[MAX];

int total_sub1,total_sub2,total_sub3,total[MAX];

int max,max1,max2,max3,roll1,roll2,roll3;

clrscr();

printf(“Enter the marks for subject1 of all the students: “);

for(i=0;i<MAX;i++)

scanf(“%d”,&sub1[i]);

printf(“Enter the marks for subject2 of all the students: “);

for(i=0;i<MAX;i++)

scanf(“%d”,&sub2[i]);

printf(“Enter the marks for subject3 of all the students: “);

for(i=0;i<MAX;i++)

scanf(“%d”,&sub3[i]);

total_sub1=total_sub2=total_sub3=0;

for(i=0;i<MAX;i++)

{

total_sub1=total_sub1+sub1[i];

total_sub2=total_sub2+sub2[i];

total_sub3=total_sub3+sub3[i];

total[i]=sub1[i]+sub2[i]+sub3[i];

}

for(i=0;i<MAX;i++)

{

printf(“The total marks obtained by the student%d is =%d\n”,i+1,total[i]);

}

max1=sub1[0];

max2=sub2[0];

max3=sub3[0];

max=total[0];

roll1=0;

roll2=0;

roll3=0;

roll=0;

for (i=0;i<MAX;i++)

{

if(max1<sub1[i])

{

max1=sub1[i];

roll1=i+1;

}

if(max2<sub2[i])

{

max2=sub2[i];

roll2=i+1;

}

if(max3<sub3[i])

{

max3=sub3[i];

roll3=i+1;

}

if(max<total[i])

{

max=total[i];

roll=i+1;

}

}

printf(“\nThe highest marks in subject1 is %d and the roll number is %d”,max1,roll1);

printf(“\nThe highest marks in subject2 is %d and the roll number is %d”,max2,roll2);

printf(“\nThe highest marks in subject3 is %d and the roll number is %d”,max3,roll3);

printf(“\n The highest total marks is %d and the roll number is %d “,max,roll);

getch();

}


