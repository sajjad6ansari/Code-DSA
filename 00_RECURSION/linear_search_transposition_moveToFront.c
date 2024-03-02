#include<stdio.h>
 struct array
{
    int A[10];
    int size;
    int length;
};


void display(struct array arr)
{
    int i;
    printf("\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
    printf("\n");

}

int LinearSearch(struct array arr ,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
          return i;

    }
    return -1;
}

void swap(int *a,int *b )
{
   int c;
   c=*b;
   *b=*a;
   *a=c;
}

int LinearSearch_transposition(struct array *arr ,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i-1;
  
        }

    }
    return -1;
}

int LinearSearch_moveToFront(struct array *arr ,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return 0;
  
        }

    }
    return -1;
}




int main()
{
    struct array arr={{1,2,4,5,3},10,5};
    printf("%d",LinearSearch(arr,5));
    display(arr);
    printf("%d",LinearSearch_transposition(&arr,5));
    display(arr);
    printf("%d",LinearSearch_moveToFront(&arr,5));
    display(arr);   
    return 0;

}