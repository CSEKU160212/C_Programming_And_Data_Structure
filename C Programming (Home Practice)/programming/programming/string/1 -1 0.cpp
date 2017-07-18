#include<stdio.h>
int string_compare(char a[50], char b[50])
{
    int i, j;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if(a[i] < b[i])
        {
            return -1;
        }
        if(a[i] > b[i])
        {
            return 1;
        }
    }

    int main()
    {
        int string_compare;
        char a[500],b[500];
        if(string_compare(a) == string_compare(b))
        {
            return 0;
        }
        if(string_compare(a) < string_compare(b))
        {
            return -1;
        }
        if(string_compare(a) > string_compare(b))
        {
            return 1;
        }
    }


}
