#include <stdio.h>
int main()
{
    char sex,ms;
    int age;
    printf("Enter age,sex,marital status");
    scanf("%d %c %c", &age,&sex,&ms);
    if(ms=='M')

        printf("Driver is ensured\n");
    else
    {
        if(sex=='M')
        {
            if(age>30)
                printf("Driver is insured\n");
            else
                printf("Driver is nor insured\n");
        }
        else
        {
            if(age>25)
                printf("Driver is insured");
                else
                    printf("driver is not insured\n");
        }
    }
    return 0;
}


