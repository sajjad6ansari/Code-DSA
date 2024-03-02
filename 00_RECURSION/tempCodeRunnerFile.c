#include <stdio.h>
#include <stdlib.h>
struct Element
{
    int r;
    int c;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *e;
};
void create(struct Sparse *s)
{
    printf("enter the dimensions mXn\n");
    scanf("%d%d",&(s->m),&(s->n));
    printf("enter the number of non zero  elements of sparse matrix \n");
    scanf("%d",&(s->num));
    s->e=(struct Element *)malloc(s->num*sizeof(struct Element));
    printf("enter the elements as there row , colm and non-zero element\n");
    int i;
    for(i=0;i<s->num;i++)
    {
        scanf("%d%d%d",&(s->e[i].r),&(s->e[i].c),&(s->e[i].x));
    }
}
void display(struct Sparse s)
{   
    int i,j,k=0;;

    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
           
           
            if(i==s.e[k].r && j==s.e[k].c && k<s.num)
            {
            printf("%d ",s.e[k].x);
            k++;
            }
            else printf("0 ");
            
        }
        printf("\n");
    }
}
int main()
{
    struct Sparse s;
    create(&s);
    display(s);
}