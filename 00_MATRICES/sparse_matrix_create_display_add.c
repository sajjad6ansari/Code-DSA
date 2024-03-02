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
    int i,j,k=0;

    for(i=1;i<=s.m;i++)
    {
        for(j=1;j<=s.n;j++)
        {
           
           
            if(i==s.e[k].r && j==s.e[k].c && k<s.num)
            {
            printf("%d ",s.e[k++].x);
            //k++;
            }
            else printf("0 ");
            
        }
        printf("\n");
    }
    printf("\n");
}

struct Sparse* addSparseMatrix(struct Sparse *s1,struct Sparse *s2)
{      if(s2->m!=s1->m || s1->n!=s2->n)
        {
            return NULL;
        }

    
        struct Sparse *s3;
        s3=(struct Sparse *)malloc(sizeof(struct Sparse));
        int i=0,j=0,k=0;
        s3->m=s2->m;
        s3->n=s2->n;
        s3->e=(struct Element *)malloc(sizeof(struct Element)*(s1->num+s2->num));
        while(i<s1->num && j<s2->num)
        {
            if(s1->e[i].r==s2->e[j].r && s1->e[i].c==s2->e[j].c )
            {
                s3->e[k]=s1->e[i];
                s3->e[k++].x=s1->e[i++].x+s2->e[j++].x;
            }
            else if(s1->e[i].r<s2->e[j].r || (s1->e[i].r==s2->e[j].r && s1->e[i].c<s2->e[j].c))
            {
                s3->e[k++]=s1->e[i++];
            }
            else 
            {
                s3->e[k++]=s2->e[j++];
            }
        }
        for(;i<=s1->num;i++)s3->e[k++]=s1->e[i];
        for(;j<=s2->num;j++)s3->e[k++]=s1->e[j];
        s3->num=k;
        return s3;
    
}
int main()
{
    struct Sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    printf("\n");
    display(s1);
    display(s2);
    s3=addSparseMatrix(&s1,&s2);
    if(s3!=NULL)display(*s3);
    else printf("sum can't be performed ,please check respective row and colm numbers");
    
}