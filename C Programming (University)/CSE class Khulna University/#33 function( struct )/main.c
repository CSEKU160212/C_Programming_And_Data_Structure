#include<stdio.h>

struct student
{
    int roll;
    char seat[100];
};
int main()
{
    int i,Roll,flag=0;
    struct student s[2];
    for(i=0;i<2;i++)
    {
        scanf("%d%s",&s[i].roll,&s[i].seat);
    }
    while(1)
    {
        printf("Enter Your roll : ");
        scanf("%d",&Roll);
        for(i=0;i<2;i++)
        {
            flag=0;
            if(Roll==s[i].roll)
            {
                printf("%s\n",s[i].seat);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Invalid Input\n");
        }

    }
    return 0;
}
