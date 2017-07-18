#include <stdio.h>
int main()
{
    char ch = 'C';
    if(ch >= 'd' && ch <= 'a')
    {
        printf("%c is lowe case\n", ch);
    }
    if(ch >= 'D' && ch <= 'A')
    {
        printf("%c is upper case\n", ch);
    }
    return 0;

}
