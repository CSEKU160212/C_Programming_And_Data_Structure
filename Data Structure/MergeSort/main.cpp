#include <bits/stdc++.h>

using namespace std;

void Merge(int A[], int first, int mid, int last);
void Merge(int A[], int first, int mid, int last)
{
    int T[last];

    int i=first, j=mid+1, k=first;
    while(i<=mid+1 && j<=last)
    {
        if(A[i]<=A[j])
            T[k++]= A[i++];
        else
            T[k++]=A[j++];
    }

    if(i>mid)
    {
        for(int b=j; b<=last; b++)
        {
            T[k]=A[b];
            k++;
        }
    }
        else
        {
        for(int b=i; b<=mid; b++)
            T[k]=A[b];
            k++;
    }

    for(int i=first; i<=last; i++)
    {
        A[i]=T[i];
    }

    for(int i=first;i<=last;i++)
        cout<<T[i]+" ";
    cout<<"\n";

}

void merge_sort(int A[], int first, int last)
{
    if(first<last)
    {
        int mid=(first+last)/2;
        merge_sort(A, first, mid);
        merge_sort(A, mid+1, last);
        Merge(A, first, mid, last);
    }
}

void printfArray(int A[], int i, int j)
{
    for(i; i<=j; i++)
        cout<<A[i]<<" ";
}

int main()
{
    int A[5];
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
    }


    merge_sort(A, 0, 4);

   // printfArray(A, 0, 4);
    return 0;
}



void Merge(int A[], int first, int mid, int last)
{
    int T[last];

    int i=first, j=mid+1, k=first;
    while(i<=mid+1 && j<=last)
    {
        if(A[i]<=A[j])
            T[k++]= A[i++];
        else
            T[k++]=A[j++];
    }

    if(i>mid)
    {
        for(int b=j; b<=last; b++)
        {
            T[k]=A[b];
            k++;
        }
    }
        else
        {
        for(int b=i; b<=mid; b++)
            T[k]=A[b];
            k++;
    }

    for(int i=first; i<=last; i++)
    {
        A[i]=T[i];
    }

    for(int i=first;i<=last;i++)
        cout<<T[i]+" ";
    cout<<"\n";

}
