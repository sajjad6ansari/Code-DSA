// #include<iostream>  
// using namespace std;

// class Element
// {
//     public:
//     int r;
//     int c;
//     int x;
// };

// class Sparse
// {
//     int m;
//     int n;
//     int num;
//     Element *e;

//     public:
//     Sparse(int m,int n,int num)
//     {
//         this->m=m;
//         this->n=n;
//         this->num=num;
//         e=new Element[this->num];
//     }
//     ~Sparse()
//     {
//         delete []e;
//     }

//     void read()
//     {
//         cout<<" enter the row , colm and respective non-zero value"<<endl;
//         for(int i=0;i<num;i++)cin>>e[i].r>>e[i].c>>e[i].x;
//     }

//     void display()
//     {
//     int k=0;
//     cout<<endl;
//     for(int i=1;i<=m;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(i==e[k].r && j==e[k].c && k<num)cout<<e[k++].x<<" ";
//             else cout<<"0 ";

//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

// };


// int main()
// {
//     Sparse s1(4,5,6);
//     s1.read();
//     s1.display();
//     return 0;
// }

#include<iostream>  
using namespace std;

class Element
{
    public:
    int r;
    int c;
    int x;
};

class Sparse
{
    int m;
    int n;
    int num;
    Element *e;

    public:
    Sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        e=new Element[this->num];
    }
    ~Sparse()
    {
        delete []e;
    }
    Sparse* operator+(Sparse &s);
    friend istream & operator>>(istream &is,Sparse &s);
    friend ostream & operator<<(ostream &os,Sparse &s);
};
    Sparse* Sparse::operator+(Sparse &s)
    {      
        if(s.m!=m || n!=s.n)
        {
            return NULL;
        }

    
        Sparse *sum;
        sum=new Sparse(m,n,num+s.num);

        int i,j,k;
        i=j=k=0;
        sum->m=s.m;
        sum->n=s.n;
        
        while(i<num && j<s.num)
        {
            if(e[i].r==s.e[j].r && e[i].c==s.e[j].c )
            {
                sum->e[k]=e[i];
                sum->e[k++].x=e[i++].x+s.e[j++].x;
            }
            else if(e[i].r<s.e[j].r || (e[i].r==s.e[j].r && e[i].c<s.e[j].c))
            {
                sum->e[k++]=e[i++];
            }
            else 
            {
                sum->e[k++]=s.e[j++];
            }
        }
        for(;i<=num;i++)sum->e[k++]=e[i];
        for(;j<=s.num;j++)sum->e[k++]=s.e[j];
        sum->num=k;
        return sum;
    
    }

    istream & operator>>(istream &is,Sparse &s)
    {
        cout<<" enter the row , colm and respective non-zero value"<<endl;
        for(int i=0;i<s.num;i++)cin>>s.e[i].r>>s.e[i].c>>s.e[i].x;
        return is;
    }

    ostream & operator<<(ostream &os,Sparse &s)
    {
    int k=0;
    cout<<endl;
    for(int i=1;i<=s.m;i++)
    {
        for(int j=1;j<=s.n;j++)
        {
            if(i==s.e[k].r && j==s.e[k].c && k<s.num)cout<<s.e[k++].x<<" ";
            else cout<<"0 ";

        }
        cout<<endl;
    }
    cout<<endl;
    return os;
    }

int main()
{
    Sparse s1(4,5,6);
    Sparse s2(4,5,6);
    cin>>s1;
    cin>>s2;
    Sparse *sum=s1+s2;
    cout<<(*sum);
    return 0;
}