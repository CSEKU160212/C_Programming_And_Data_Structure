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
        if(str[i]==copystr[i])
        {
            if(str[i]=='\0')
            {
                printf("\nConfirmed\n");
                break;
            }

        }
        else
        {
            printf("\nSorry...pleae enter again correctly\n");
            break;

        }


    }

}
