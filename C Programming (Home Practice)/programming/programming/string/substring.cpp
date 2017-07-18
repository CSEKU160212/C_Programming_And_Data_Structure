
#include<stdio.h>

int main()
{
    char str[100], str2[100];
    int count1 = 0, count2 = 0, i, j, flag=0;

    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(str2);
    while (str[count1] != '\0')
        count1++;
    while (str2[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != str2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("SEARCH SUCCESSFUL!");
    else
        printf("SEARCH UNSUCCESSFUL!");
}
