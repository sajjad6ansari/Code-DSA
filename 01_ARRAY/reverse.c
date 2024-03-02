#include<stdio.h>
#include<stdlib.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
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

//  void reverse(struct  Array *arr)
//  {
//     int *arr_aux;
//     arr_aux=(int *)malloc(arr->length*sizeof(int));
//     int i;
//     for(i=0;i<arr->length;i++)
//         arr_aux[i]=arr->A[arr->length-1-i];
//     for(i=0;i<arr->length;i++)
//         arr->A[i]=arr_aux[i];

//  }

 void reverse(struct  Array *arr)
 {
    
    int i;
    for(i=0;i<arr->length/2;i++)
       swap(&arr->A[i] ,&arr->A[arr->length-1-i]);
 }
 

 int main()
{
 struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
 
 Display(arr);
 reverse(&arr);
 Display(arr);
 return 0;
}