#include<stdio.h>
int main()
{
    typedef struct cricket
    {
        char name[100];
        char tm_name[100];
        int run;
    };
    cricket a[50];
    for(int i=0;i<2;i++)
    {
        gets(a[i].name);
        gets(a[i].tm_name);
        fflush(stdin);
        scanf("%d",&a[i].run);
        fflush(stdin);
    }
    int maxrun = a[0].run;
    int j = 0;
    for(int i=1;i<50;i++)
    {
        if(a[i].run>maxrun)
        {
            maxrun = a[i].run;
            j  = i;
        }
    }
    printf("Name : %s",a[j].name);
    printf("\nTeam name: %s",a[j].tm_name);
    printf("\nRun : %d",a[j].run);
}
