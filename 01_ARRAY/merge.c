#include<stdio.h>
#include<stdlib.h>
struct Array
{
 int A[25];
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
struct Array* merge(struct Array *arr1,struct Array *arr2)
{
    struct Array *arr3;
    arr3=(struct Array*)malloc(sizeof(struct Array));
    int i=0;
    int j=0;
    int k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];        
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=arr1->length+arr2->length;
    arr3->size=25;

    return arr3;

    
      

}  

int main()
{
    struct Array arr1={{2,3,9,16,18,21,28,32,35},25,9};
    struct Array arr2={{2,3,9,12,18,20,28},25,7};
    struct Array *arr3;
    arr3=merge(&arr1,&arr2);
    display(*arr3);

}