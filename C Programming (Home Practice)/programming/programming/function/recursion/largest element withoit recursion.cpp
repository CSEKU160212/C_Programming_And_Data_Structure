#include<stdio.h>
#define MAX 100

int getMaxElement(int []);
int size;

int main(){

    int arr[MAX],max,i;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter %d elements of an array: ", size);
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);

    max=getMaxElement(arr);

    printf("Largest element of an array is: %d",max);

    return 0;
}

int getMaxElement(int arr[]){

    int i=1,max;

    max=arr[0];

    while(i < size){
      if(max<arr[i])
           max=arr[i];
      i++;
    }

    return max;
}


