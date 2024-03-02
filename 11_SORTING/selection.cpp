#include<iostream>   
#include<stdbool.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
void SelectionSort(int A[],int n)
{
    bool swapped;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min=A[i];
        for(j=0;j<n-i-1;j++)
        {
            
            if(min>a[j])
            {
                swap(&A[j],&min);
                
            }
            display(A,n);
            cout<<endl;
        }
        if(swapped==false)
                break;
    }
}

int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr,n);
    cout<<"after selection sort\n";
    display(arr,n);
    return 0;
}