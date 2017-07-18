#include <stdio.h>

int main() {

    int N, temp, hour, minute, second;
    scanf("%d", &N);
    temp=N;
    hour=temp/3600;
    temp=temp%3600;
    minute=temp/60;
    temp=temp%60;
    second=temp;
    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}
