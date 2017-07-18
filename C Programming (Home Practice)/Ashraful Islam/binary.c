#include <stdio.h>

int main()
{
    int i,x,n, l=0;
    scanf("%d", &n);
    for(i=0; n%2!=0;i++){
       x=n%2;
       l++;
       if(x=1)
        break;
    }

     for(i=l; i>=0;i--){
            printf("%d", x);}
}
