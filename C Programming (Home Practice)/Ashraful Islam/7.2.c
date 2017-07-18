#include<stdio.h>
#include<stdlib.h>
int main(){
int i, sum=0, n;
scanf("%d", &n);
for(i=0; i<=n; i++){
if(i%2!=0)
continue;

sum=sum+i;
}
printf("%d", sum);
}
