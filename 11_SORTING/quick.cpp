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

int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    while(i<j){
        while(A[i]<=pivot)i++;
        while(A[j]>pivot)j--;
        if(i<j)swap(&A[i],&A[j]);
    }
    return j;
}

void quickSort(int A[],int l,int h){
        if(l<h){
            int j=partition(A,l,h);
            swap(&A[l],&A[j]);
            display(A,7);
            cout<<endl;
            quickSort(A,l,j-1);
            quickSort(A,j+1,h); 
        }


}

int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    quickSort(arr,0,n-1);
    display(arr,n);
    return 0;

}