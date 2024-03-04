#include<iostream>
using namespace std;
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int* merge(int A[],int lstart,int lend,int rstart,int rend,int n){
    int i=lstart,j=rstart;
    static int *C=(int *)malloc(sizeof(int)*n);
    int k=lstart; 
    while(i<=lend && j<=rend)
    {
        if(A[i]<A[j])C[k++]=A[i++];
        else C[k++]=A[j++];
    }

    while(i<=lend)C[k++]=A[i++];
    while(j<=rend)C[k++]=A[j++];

    i=lstart;
    for(;i<k;i++)A[i]=C[i];
    return A;
}
int*  mergeSort(int A[],int start,int end,int n){
    if(start<end){
        int mid=(end +start)/2;
        mergeSort(A,start,mid,n);
        mergeSort(A,mid+1,end,n);
        A=merge(A,start,mid,mid+1,end,n);
        display(A,n);
        cout<<endl;
    }
    return A;
}

int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1,n);
    display(arr,n);
    return 0;

}