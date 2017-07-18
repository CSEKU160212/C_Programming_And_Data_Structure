#include<stdio.h>

int bin_search(int high,int low,int value)
{
    char a[100];
    if(high<low)
        return -1;
    int mid = (high+low)/2;
    if(a[mid]==value)
    return mid;
    else if(a[mid]<value)
        return bin_search(high,mid+1,value);
    else
        return bin_search(mid-1,low,value);
}

int main()
{
    int a[100], value,high,low;;
    scanf("%c",&a[100]);
    printf("%d",bin_search(high,low,value));
}
