#include<stdio.h>
#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++ ){
            printf("%d", (i+j)%2);
        }
        printf("\n");
    }
    return 0;
}
