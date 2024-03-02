#include<stdio.h>

int main()
{
char a[]="python";
char b[7];
int i;
// for(i=0;a[i]!='\0';i++)
// {
//     b[i]=a[5-i];

// }
// b[i]='\0';//null character terminate the array of characters

// printf("%s\n",b);




//when we knw length

// for(i=0;i<3;i++)
// {
//     char temp=a[i];
//     a[i]=a[5-i];
//     a[5-i]=temp;
// }

// printf("%s\n",a);


for(i=0;i<3;i++)
{
    

}
i=i-1;
int j=0;
for(j=0;j<i;j++,i--)
{
    char temp=a[i];
    a[i]=a[j];
    a[j]=temp;  
}
printf("%s\n",a);
}