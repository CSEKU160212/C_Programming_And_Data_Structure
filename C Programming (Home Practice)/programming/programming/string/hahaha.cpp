#include<stdio.h>
int main()
{
    char str[100],copystr[100];
    printf("Enter a string: \n");
    int i;
    gets(str);
    printf("Please enter the string again: \n");
    gets(copystr);
    for(i=0; ;i++)
    {

            if(str[i]<copystr[i])
            {
                printf("\n-1\n");
                break;
            }


        else if(str[i]>copystr[i])
        {
            printf("\n1\n");
            break;

        }
        else
        {
            printf("0");
            break;
        }


    }

}

