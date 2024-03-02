#include<iostream>
#include<math.h>
using namespace std;

class Term
{
    public:
    int coeff;
    int exp;
};
class Polynomial
{
    private:
    int n;
    Term *t;

    public:
    Polynomial(int n)
    {
        this->n=n;
        t=new Term[this->n];
    }
    ~Polynomial()
    {
        delete []t;
    }
    Polynomial  operator+(Polynomial &p);
    int evaluate( int x);
    friend istream & operator>>(istream &is,Polynomial &p);
    friend ostream & operator<<(ostream &os,Polynomial &p);
};

Polynomial  Polynomial::operator+(Polynomial &p)
{
    int i,j,k;
    i=j=k=0;
    Polynomial sum(n+p.n);
    while(i<n && j<p.n)
    {
        if(t[i].exp==p.t[j].exp)
        {
            sum.t[k].exp=t[i].exp;
            sum.t[k++].coeff=t[i++].coeff+p.t[j++].coeff;
        }
        else if(t[i].exp>p.t[j].exp)sum.t[k++]=t[i++];
        else sum.t[k++]=p.t[j++];
    }
    for(;i<n;i++)sum.t[k++]=t[i];
    for(;j<p.n;j++)sum.t[k++]=p.t[j];
    sum.n=k;
    return sum;
}

int Polynomial::evaluate( int x)
{
    int value=0;
    for(int i=0; i<n;i++)
    {
        value+=t[i].coeff*pow(x,t[i].exp);
    }
    cout<<endl;
    return value;
}

istream & operator>>(istream &is,Polynomial &p)
{
    cout<<"enter the coefficient and exponent of respective non-zero"<<p.n<<" terms"<<endl;
    for(int i=0;i<p.n;i++)
    {
        cin>>p.t[i].coeff>>p.t[i].exp;
    }
    cout<<endl;
    return is;
}

ostream & operator<<(ostream &os,Polynomial &p)
{
    for(int i=0;i<p.n;i++)
    {   if(p.t[i].exp==1)cout<<p.t[i].coeff<<"x";
        else if(p.t[i].exp==0)cout<<p.t[i].coeff;
        else cout<<p.t[i].coeff<<"x"<<p.t[i].exp;
        if(i<p.n-1)cout<<" + ";
    }
    cout<<endl;
    return os;
}

int main()
{
    Polynomial p1(3),p2(5);
    cin>>p1;
    cin>>p2;
    cout<<p1;
    cout<<p2;
    cout<<p1.evaluate(1)<<endl;
    Polynomial p3=p1+p2;
    cout<<p3;
    return 0;
}