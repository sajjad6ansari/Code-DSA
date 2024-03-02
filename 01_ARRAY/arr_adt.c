#include<stdio.h>
#include<stdlib.h>

struct Array
{
    // int *p;
    int p[20];
    int length;
    int size;
    
}; 
void display( struct Array arr)
{
    int i;
    printf("all the elements of array : ");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.p[i]);
    
}

void append(struct Array *arr,int data)
{
    if(arr->length<arr->size)
    {
        
        arr->p[arr->length++]=data;
        // arr->length++;
        

    }
}
void insert(struct Array *arr,int index,int data)
{
    if(index>=0 && index<=arr->length && arr->length<arr->size)
    {
        int i;
        for(i=arr->length;i>index;i--)
        {
            arr->p[i]=arr->p[i-1];
        }
        arr->p[index]=data;
        arr->length++;
    }
}
void delete(struct Array *arr,int index)
{
    int x=arr->p[index];
    if(index>=0 && index<=arr->length && arr->length<arr->size)
    {
      
      int i;
      for(i=index;i<arr->length-1;i++)
      {
        arr->p[i]=arr->p[i+1];
      }  
      arr->length--;
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int linearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(arr->p[i]==key)
            {
                if(i>0)
                    swap(&arr->p[i],&arr->p[0]);
                return 0;
            }
    }
    return -1;      
}


//this transposition in linear search


// int linearSearch(struct Array *arr,int key)
// {
//     int i;
//     for(i=0;i<arr->length;i++)
//     {
//         if(arr->p[i]==key)
//             {
//                 if(i>0)
//                     swap(&arr->p[i],&arr->p[i-1]);
//                 return i-1;
//             }
//     }
//     return -1;      
// }

//this is simple linear search
// int linearSearch(struct Array arr,int key)
// {
//     int i;
//     for(i=0;i<arr.length;i++)
//     {
//         if(arr.p[i]=key)
//             return i;
//     }
//     return -1;      
// }


//binary search through iteration
// int binarySearch(struct Array arr,int l,int h,int key)
// {
//     int mid;
//     
//     mid=(l+h)/2;
//     while(l<=h)
//     {
//         if(arr.p[mid]==key)
//             return mid;
//         else if(key<arr.p[mid])
//             h=mid-1;
//         else
//             l=mid+1; 
//         
                                   
//     }
//     return -1;
// }

int binarySearch(struct Array arr,int l,int h,int key)
{
    int mid;
    mid=(l+h)/2;
    
    if(l<=h)
    {
        if(arr.p[mid]==key)
            return mid;
        else if(key<arr.p[mid])
            return binarySearch(arr,l,mid-1,key);
        else
            return binarySearch(arr,mid+1,h,key);
                                   
    }
    return -1;
}


int main()
{
    struct Array arr={{34,45,53,63,93,96},6,20};
    // printf("size : ");
    // scanf("%d",&arr.size);
    // arr.p=malloc((arr.size)*sizeof(int));
    // arr.length=0;
    // printf("enter no of elements : ");
    // scanf("%d",&arr.length);
    // printf("enter elements : ");
    // int i;
    // for(i=0;i<arr.length;i++)
    // {
    //     scanf("%d",&arr.p[i]);
    // }   
    display(arr);
    // append(&arr ,678);
    // printf("\n");
    // display(arr);
    // insert(&arr,5,91);
    // printf("\n");
    // display(arr);
    // delete(&arr,3);
    // printf("\n");
    // display(arr);    
    // printf("\n");
    // printf("%d",linearSearch(&arr,63));
    // printf("\n");
    //  display(arr);
    printf("%d",binarySearch(arr,0,6,63));
    return 0;                               
}