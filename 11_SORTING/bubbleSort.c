#include<stdio.h>   
#include<stdbool.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int A[],int n)
{
    bool swapped;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                swapped=true;
            }
            
        }
        if(swapped==false)
                break;
    }
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    display(arr,n);
    return 0;

}



