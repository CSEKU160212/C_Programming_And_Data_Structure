#include<stdio.h>
#include<stdlib.h>
int main()
{
    int R[100], i;
    for(i=0; i<40; i++){
            printf("%d\n", i+160201);
            scanf("%d", &R[i]);
            printf("\n\n");
    }
    for(i=0; i<40; i++){
            if(R[i]>=80 && R[i]<=100)
            printf("%d,\t", i+160201);
    }

    return 0;
}
