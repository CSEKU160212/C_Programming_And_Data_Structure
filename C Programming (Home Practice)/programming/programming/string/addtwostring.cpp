#include <stdio.h>
int main()
{
    char a[30]="Bangla",b[30]="desh";
    int i,j,l;

    for(i=6,j=0; b[j]!='\0'; i++,j++)
    {
        a[i] = b[j];

    }
    a[i]= '\0';
    printf("%s",a);
    return 0;
}
