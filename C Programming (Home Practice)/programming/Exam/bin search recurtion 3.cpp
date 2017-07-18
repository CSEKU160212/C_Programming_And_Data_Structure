#include<stdio.h>
int bin_sr(int a[],int n,int low,int high)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
    mid = (low+high)/2;
    if(a[mid]==n)
    {
        printf("%d is found at location %d",n,mid+1);
        return 0;
    }
    if(a[mid]<n)
    {
        low = mid +1;
        bin_sr(a,n,low,high);
    }
    if(a[mid]>n)
    {
        high = mid - 1;
        bin_sr(a,n,low,high);
    }
}
int main()
{
    int a[100];
    int n,x,no,res;
    scanf("%d %d",&n,&no);
    for(x=0;x<no;x++)
    {
        scanf("%d",&a[x]);
    }
    res = bin_sr(a,n,0,no-1);
    if(res==-1)
    {
        printf("Not found");
    }

}
