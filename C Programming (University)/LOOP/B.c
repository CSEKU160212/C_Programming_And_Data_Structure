#include<stdio.h>
int main()
{
    int i, x, y, z, a, b;
    scanf("%d", &z);
    for(i=0; i<z; i++){
        scanf("%d %d", &x, &y);
        if(x>y){
            a=((x+y)/2);
            b=((x-y)/2);
            printf("%d %d\n", a, b);
        }
    else{
        printf("impossible\n");
        }

    }
    return 0;
}
