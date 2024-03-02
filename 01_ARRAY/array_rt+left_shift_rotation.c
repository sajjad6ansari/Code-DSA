#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
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

void reverse(struct array *arr)
{
    int i,j;
    int B[arr->length];
    for(j=0,i=arr->length-1;i>=0;i--,j++)
    {
        B[j]=arr->A[i];

    }
    for(i=0;i<arr->length;i++)
     {
        arr->A[i]=B[i];
     }
}

void reverse_swap(struct array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
      swap(&arr->A[i],&arr->A[j]);
}

int main()
{
    struct array arr={{3,7,2,9,5},10,5};
    display(arr);
    reverse(&arr);
    display(arr);
    reverse_swap(&arr);
    display(arr);

}