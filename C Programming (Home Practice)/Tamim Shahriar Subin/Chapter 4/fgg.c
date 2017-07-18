#include<stdio.h>
int main() {
int x,y,z,o,m,m1,m2;
scanf("%d%d%d%d", &x, &y, &z, &o);
m = (x > y)? x:y;
m1 = (m > z)? m : z;
m2 = (m1 > o )? m1 : o;
printf("the maximum number is %d", m2);
return 0;


}
