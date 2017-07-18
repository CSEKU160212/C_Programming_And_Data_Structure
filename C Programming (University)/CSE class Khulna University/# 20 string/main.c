/// string = set of characters///


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30];
    ///scanf("%s",&a); (former niom)

    scanf("%[^\n]",&a); /// ( updated )

    /// ekhane gets(  ); dieo input nite partam.

    printf("input string : %s",a);

    return 0;
}
