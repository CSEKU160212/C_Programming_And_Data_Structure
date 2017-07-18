#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, s, f;
    scanf("%s%f", &s, &f);
    if(s<=f){
        for(j=s; j<=f; j++){
            for(i=2; i<=s/2; i++){
                if(s%i==0)
                    printf("%d", i);
            }
        }
    }
    return 0;
}
