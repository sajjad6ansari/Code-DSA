#include <stdio.h>
#include <stdlib.h>
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
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
// for unsorted arrays of set
struct Array *union_set(struct Array *arr1, struct Array *arr2)
{
    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));
    int i;
    int j;
    int k = 0;

    for (i = 0; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (j = 0; j < arr2->length; j++)
    {
        int count = 0;
        for (i = 0; i < arr1->length; i++)
        {
            if (arr2->A[j] == arr1->A[i])
            {
                count = 1;
                break;
            }
        }
        if (!count)
        {
            arr3->A[k++] = arr2->A[j];
        }
    }
    arr3->size = 25;
    arr3->length = k;
    return arr3;
}

//for sorted array of set
// used merging 
struct Array* union_sort(struct Array *arr1, struct Array *arr2)
{
    int i=0;
    int j=0;
    int k=0;
    struct Array *arr3;
    arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else if(arr1->A[i]>arr2->A[j])
            arr3->A[k++]=arr2->A[j++];  
        else//this removes the duplication
            {
               arr3->A[k++]=arr2->A[j++];
               i++; 
            }          
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];    
    
    arr3->length=k;
    arr3->size=25;
    return arr3;
}
int main()
{
    // struct Array arr1 = {{2, 3, 9, 16, 35, 45, 5, 6}, 25, 8};
    // struct Array arr2 = {{2, 3, 9, 12, 18, 20, 28}, 25, 7};
    struct Array arr1 = {{2, 3, 9, 16, 35, 45, 55, 76}, 25, 8};
    struct Array arr2 = {{2, 3, 9, 12, 18, 20, 28}, 25, 7};
    
    struct Array *arr3;
    // arr3 = union_set(&arr1, &arr2);
    arr3=union_sort(&arr1, &arr2);
    display(*arr3);
    return 0;
}