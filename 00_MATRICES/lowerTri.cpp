// #include<iostream>
// using namespace std;
// class lowerTriRowMajor
// {
//     private:
//     int n;
//     int *A;

//     public:
//     lowerTriRowMajor()
//     {
//         n=3;
//         A=new int[3];
//     }    
//     lowerTriRowMajor(int n)
//     {
//         this->n=n;
//         A=new int[n];
//     }
//     void set(int i,int j, int x);
//     int get(int i, int j);
//     void display();

//     ~lowerTriRowMajor() 
//     {
//         delete []A;
//         cout<<"diagonal matrix destroyed"<<endl;
//     }
// };
// void lowerTriRowMajor::set(int i,int j, int x)
// {
//         if(i>=j)A[i*(i-1)/2+j-1]=x;
        
// }
// int lowerTriRowMajor::get(int i, int j)
// {
//         if(i>=j)return A[i*(i-1)/2+j-1];
//         return 0;
// }
// void lowerTriRowMajor::display()
// {
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//              {
//                 if(i>=j)cout<<A[i*(i-1)/2+j-1]<<" ";
//                 else cout<<"0 ";
//              }
//              cout<<endl;
//         }
// }
// int main()
// {
//     lowerTriRowMajor d(4);
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=4;j++)
//         {
//             int x;
//             scanf("%d",&x);
//             d.set(i,j,x);
//         }
       
//     }
//     d.display();
//     return 0;
// }


#include<iostream>
using namespace std;
class lowerTriColmMajor
{
    private:
    int n;
    int *A;

    public:
    lowerTriColmMajor()
    {
        n=3;
        A=new int[6];
    }    
    lowerTriColmMajor(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();

    ~lowerTriColmMajor() 
    {
        delete []A;
        cout<<"diagonal matrix destroyed"<<endl;
    }
};
void lowerTriColmMajor::set(int i,int j, int x)
{
        if(i>=j)A[(n)*(j-1)-(j-2)*(j-1)/2+i-j]=x;
        
}
int lowerTriColmMajor::get(int i, int j)
{
        if(i>=j)return A[(n)*(j-1)-(j-2)*(j-1)/2+i-j];
        return 0;
}
void lowerTriColmMajor::display()
{
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
             {
                if(i>=j)cout<<A[(n)*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
                else cout<<"0 ";
             }
             cout<<endl;
        }
}
int main()
{
    lowerTriColmMajor d(4);
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
    return 0;
}