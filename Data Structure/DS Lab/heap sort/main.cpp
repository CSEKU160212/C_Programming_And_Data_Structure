#include<iostream>
using namespace std;
int main()
{
    int a,arr[10],b;
    while(true)
    {
        cout<<"input the range\n";
        cin>>a;
        for(int i=1; i<=a; i++)
            cin>>arr[i];

        for(int i=2; i<=a; i++)
        {
            int k=i;
            int temp=arr[i];
            while(k/2>0 && arr[k/2]<=temp)
            {
                arr[k]=arr[k/2];
                k=k/2;
            }
            arr[k]=temp;
        }
        for(int i=1; i<=a; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
        cout<<"for deleting maximum press 1\n for sort press 2\n";
        cin>>b;
        if(b==1)
        {
            int temp=arr[a];
            int i=2;
            while(i<=a)
            {
                if(i<a && arr[i]<arr[i+1])
                    i+=1;
                if(temp>=arr[i])
                    break;
                arr[i/2]=arr[i];
                i*=2;
            }
            arr[i/2]=temp;

            for(int i=1; i<a; i++)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else if(b==2)
        {
            int q,i,j,key,temp;
            for(q=a; q>=1; q--)
            {
                temp=arr[1];
                arr[1]=arr[q];
                arr[q]=temp;
                i=1;
                key=arr[i];
                j=2*i;
                if(j+1 < q)
                {
                    if(arr[j+1] > arr[j])
                        j++;
                }
                while(j<=q-1 && key<arr[j])
                {
                    arr[i]=arr[j];
                    i=j;
                    j=2*i;
                    if(j+1 < q)
                    {
                        if(arr[j+1] > arr[j])
                            j++;
                    }
                    else
                        break;
                }
                arr[i]=key;
            }
            for(int i=1; i<=a; i++)
                cout<<arr[i]<<"\n";
            cout<<"\n";
        }
    }

    return 0;
}
