#include<stdio.h>

int main()
{
    int i,j,a,b;
    scanf("%d",&i);
    for(j=0;j<i;j++){
        scanf("%d %d",&a,&b);
        if(a>b)printf(">");
        else if(a<b)printf("<");
        else printf("=");
        printf("\n");
    }
    return 0;
}

