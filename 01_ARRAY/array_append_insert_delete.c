 #include<stdio.h>
 struct array
{
    int A[10];
    int size;
    int length;
};

void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length]=x;
        arr->length++;
    }
}

void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void insert(struct array *arr,int index,int element )
{
    if(index>=0 && index<=arr->length)
    {
        int i;
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        } 
        arr->A[index]=element;
        arr->length++;

    }
}

int delete(struct array *arr,int index)
{   
   int x=0; 
   if(index>=0 && index<arr->length);
   {
    x=arr->A[index];
    int i;
    for(i=index;i<=arr->length-2;i++)
       arr->A[i]=arr->A[i+1]; 
   arr->length--;
   return x;
}
return 0;
}
int main()
{
   struct array arr={{1,2,4,5,3},10,5};
   append(&arr,10);
   insert(&arr,4,56);
   printf("deleted element is %d\n",delete(&arr,3));
   display(arr);



}