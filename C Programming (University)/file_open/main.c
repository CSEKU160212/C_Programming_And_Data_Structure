#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    FILE *fp;
    fp=fopen("SERIAL.txt", "w");
    for(i=0; i<=100; i++){
    fprintf(fp,"%d\n", i);
    }
    fclose(fp);
    return 0;
}
