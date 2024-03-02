#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Term
{
    int coeff;
    int exp;
};

struct Poly
{
    int n;
    struct Term *t;
};

void create(struct Poly *p)
{
    printf("enter the no. of terms in the polynomial\n");
    scanf("%d",&p->n);
    printf("enter the coefficient and exponent of each non-zero %d terms\n",p->n);
    int i;
    p->t=(struct Term*)malloc(sizeof(struct Term)*p->n); 
    for(i=0;i<p->n;i++)scanf("%d %d",&(p->t[i].coeff),&(p->t[i].exp));    
}
void display(struct Poly p)
{
    int i;
    for(i=0;i<p.n;i++)
    {
        printf("%dx%d",p.t[i].coeff,p.t[i].exp);
        if(i<p.n-1)printf("+");
    }
    printf("\n");
}
int evaluate(struct Poly *p ,int x)
{
    int i,value=0;
    for(i=0;i<p->n;i++)
    {
        value=value+p->t[i].coeff*pow(x,p->t[i].exp);
    }
    return value;
}
struct Poly* addpoly(struct Poly *p1,struct Poly *p2)
{
    int i=0,j=0,k=0;
    struct Poly *p3=(struct Poly*)malloc(sizeof(struct Poly));
    p3->t=(struct Term*)malloc(sizeof(struct Term)*(p1->n+p2->n));
    while(i<p1->n && j<p2->n)
    {
        if(p1->t[i].exp==p2->t[j].exp)
        {
            p3->t[k].exp=p1->t[i].exp;
            p3->t[k++].coeff=p1->t[i++].coeff+p2->t[j++].coeff;
        }
        else if(p1->t[i].exp>p2->t[j].exp)p3->t[k++]=p1->t[i++];
        else p3->t[k++]=p2->t[j++];
    }
    for(;i<p1->n;i++)p3->t[k++]=p1->t[i];
    for(;j<p2->n;j++)p3->t[k++]=p2->t[j];
    p3->n=k;
    return p3;
}

int main()
{
    struct Poly p1,p2,*p3;
    create(&p1);
    display(p1);
    create(&p2);
    display(p2);
    printf("%d\n",evaluate(&p1,1));
    printf("%d\n",evaluate(&p2,1));
    p3=addpoly(&p1,&p2);
    printf("%d\n",evaluate(p3,1));
    display(*p3);
    return 0;
}