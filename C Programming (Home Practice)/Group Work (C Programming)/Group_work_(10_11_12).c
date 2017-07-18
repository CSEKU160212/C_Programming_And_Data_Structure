#include<stdio.h>
#include<stdlib.h>

struct student
{
    int r;
    char seat_info[100];
};

int main()
{
    int i, roll, flag=0;
    struct student a[25];
    for(i=0; i<5; i++)
    {
     scanf("%d%s", &a[i].r, &a[i].seat_info);
    }


   while(1)
    {
        printf("\n\nEnter your roll number: ");
        scanf("%d", &roll);
    for(i=0;i<5;i++)
    {
        if(a[i].r==roll){
                flag=1;
                break;}
          else
            flag=0;
    }
    if(flag==1){
        printf("%s", a[i].seat_info);
    }
    else if(flag==0)
        printf("Invalid");
   }
    return 0;
    }



