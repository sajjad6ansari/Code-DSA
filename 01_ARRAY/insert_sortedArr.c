#include<stdio.h>
#include<stdlib.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }
 void insert_sortedArr(struct Array *arr,int x)//incresing order
 {
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
 }

int isSorted(struct Array arr)//incresing order
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
return 1;
}
void rearrange(struct Array *arr)
{
    int i=0;
    int j=arr->length-1;

while(i<j){
        while(arr->A[i]<0){
        i++;
    }
    while(arr->A[j]>=0){
        j--;
    }
    if(i<j)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}
}

int main()
{

    struct Array arr={{2,3,-90,16,18,-21,28,-32,-35},10,9};
 
    display(arr);
    //insert_sortedArr(&arr,19);
    // printf("\n");
    // display(arr);
    // printf("\n");
    // printf("%d",isSorted(arr));
    rearrange(&arr);
     printf("\n");
    display(arr);



} 