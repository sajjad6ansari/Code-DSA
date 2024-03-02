#include<stdio.h>
#include<stdlib.h>

 struct array_dyanamic
{
    int *A;
    int size;
    int length;
};

 struct array_static
{
    int A[20];
    int size;
    int length;
};

void display(struct array_dyanamic arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void display1(struct array_static arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

int main()
{
    //for dynamic array
    struct array_dyanamic arr;

    printf("Enter size of array ");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));

    arr.length=0;
    int n,i;
    printf("Enter n i.e numeber of elements ");
    scanf("%d",&n);
    printf("Enter all elements\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }

    arr.length=n;
    display(arr);

    printf("\nNow for static array\n");


    //for static array 
   struct array_static arr1={{1,2,4,5,3},20,5};
   display1(arr1);


    

}