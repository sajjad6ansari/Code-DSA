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

void InsertionSort(int A[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i]<A[j])
            {
                swap(&A[j],&A[i]);
            }
            
        }
        display(A,n);
        cout<<endl;
    }
}

int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr,n);
    display(arr,n);
    return 0;

}



