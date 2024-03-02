#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};
int get(struct array arr, int i)
{
    if(i>=0 && i<arr.length)
    {
        return arr.A[i];
    }
}

void set(struct array *arr, int i,int x)
{
    if(i>=0 && i<arr->length)
        arr->A[i]=x;
}

int min(struct array arr)
{
    int m=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(m>arr.A[i])
         m=arr.A[i];
    }
    return m;
}
int max(struct array arr)
{
    int m=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(m<arr.A[i])
         m=arr.A[i];
    }
    return m;
}
int sum(struct array arr)
{
    int s=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        
         s+=arr.A[i];
    }
    return s;
}


 
// Return sum of elements in A[0..N-1]
// using recursion.
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
 


float avg(struct array arr)
{
    
    return (float)sum(arr)/arr.length;
}
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}



int main()
{
    struct array arr={{3,7,2,9,5},10,5};

    int A[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(A) / sizeof(A[0]);
    printf("%d\n", findSum(A, N));
   

    printf("%d\n",get(arr,2));
    set(&arr,0,15);
    display(arr);
    printf("%d\n",max(arr));
    printf("%d\n",min(arr));
    printf("%d\n",sum(arr));
    printf("%f\n",avg(arr));
   



    
}