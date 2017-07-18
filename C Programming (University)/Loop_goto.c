#include<stdio.h>
int main(){
    int i=1;
    L: printf("%d\n", i);
    if(i<10){
    i=i+1;
    goto L;
    }
    return 0;
}
