#include<stdio.h>
int main()
{
    int d, m, y;
    printf("Enter the date just like as DD-MM-YYYY: ");
    scanf("%d-%d-%d", &d, &m, &y);
    printf("\nDay= %d\nMonth= %d\nYear=%d", d, m, y);
    return 0;
}
