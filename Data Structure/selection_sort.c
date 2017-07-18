#include<stdio.h>

int main()
{
    int A[20];
    int i, j, k, l;
    for(k=0; k<10; k++)
    {
        scanf("%d", &A[k]);
    }

    for(i=0; i<9; i++)
    {
        int small_index=i;
        for(j=i+1; j<10; j++)
        {
            if (A[j]<A[small_index])
                small_index=j;
        }
        int temp= A[i];
        A[i]=A[small_index];
        A[small_index]=temp;
    }

    for(l=0; l<10; l++)
    {
        printf("%d ", A[l]);
    }
    return 0;
}
