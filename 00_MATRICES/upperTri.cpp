#include<iostream>
using namespace std;
class upperTriRowMajor
{
    private:
    int n;
    int *A;

    public:
    upperTriRowMajor()
    {
        n=3;
        A=new int[3];
    }    
    upperTriRowMajor(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();
    void printA();

    ~upperTriRowMajor() 
    {
        delete []A;
        cout<<"diagonal matrix destroyed"<<endl;
    }
};
void upperTriRowMajor::set(int i,int j, int x)
{
        if(i<=j)A[n*(i-1)-(i-1)*(i-2)/2+j-i]=x;
        
}
int upperTriRowMajor::get(int i, int j)
{
        if(i<=j)return A[n*(i-1)-(i-1)*(i-2)/2+j-i];
        return 0;
}
void upperTriRowMajor::display()
{
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
             {
                if(i<=j)cout<<A[n*(i-1)-(i-1)*(i-2)/2+j-i]<<" ";
                else cout<<"0 ";
             }
             cout<<endl;
        }
}
void upperTriRowMajor::printA()
{
    int l=n*(n+1)/2;
    for(int i=0;i<l;i++)
    cout<<A[i]<<" ";
}
int main()
{
    upperTriRowMajor d(4);
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            int x;
            scanf("%d",&x);
            d.set(i,j,x);
        }
       
    }
    d.display();
    d.printA();
    return 0;
}


// #include<iostream>
// using namespace std;
// class upperTriColmMajor
// {
//     private:
//     int n;
//     int *A;

//     public:
//     upperTriColmMajor()
//     {
//         n=3;
//         A=new int[6];
//     }    
//     upperTriColmMajor(int n)
//     {
//         this->n=n;
//         A=new int[n];
//     }
//     void set(int i,int j, int x);
//     int get(int i, int j);
//     void display();
//     void printA();

//     ~upperTriColmMajor() 
//     {
//         delete []A;
//         cout<<"diagonal matrix destroyed"<<endl;
//     }
// };
// void upperTriColmMajor::set(int i,int j, int x)
// {
//         if(i<=j)A[(j-1)*j/2+i-1]=x;
        
// }
// int upperTriColmMajor::get(int i, int j)
// {
//         if(i<=j)return A[(j-1)*j/2+i-1];
//         return 0;
// }
// void upperTriColmMajor::display()
// {
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//              {
//                 if(i<=j)cout<<A[(j-1)*j/2+i-1]<<" ";
//                 else cout<<"0 ";
//              }
//              cout<<endl;
//         }
// }
// void upperTriColmMajor::printA()
// {
//     int l=n*(n+1)/2;
//     for(int i=0;i<l;i++)
//     cout<<A[i]<<" ";
// }
// int main()
// {
//     upperTriColmMajor d(4);
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=4;j++)
//         {
//             int x;
//             scanf("%d",&x);
//             if(i<=j)d.set(i,j,x);
//         }
       
//     }
//     d.display();
//     cout<<endl;
//     d.printA();
    
//     return 0;
// }