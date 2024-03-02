#include<iostream>
using namespace std;
class DiagonalMatrix
{
    private:
    int n;
    int *A;

    public:
    DiagonalMatrix()
    {
        n=2;
        A=new int[2];
    }    
    DiagonalMatrix(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j, int x);
    int get(int i, int j);
    void display();

    ~DiagonalMatrix() 
    {
        delete []A;
        cout<<"diagonal matrix destroyed"<<endl;
    }

};
void DiagonalMatrix::set(int i,int j, int x)
{
        if(i==j)A[i-1]=x;
        
}
int DiagonalMatrix::get(int i, int j)
{
        if(i==j)return A[i-1];
        return 0;
}
void DiagonalMatrix::display()
{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             {
                if(i==j)cout<<A[i]<<" ";
                else cout<<"0 ";
             }
             cout<<endl;
        }
}
int main()
{
    DiagonalMatrix d(4);
    d.set(1,1,1);
    d.set(2,2,4);
    d.set(3,3,6);
    d.set(4,4,9);
    d.set(3,4,8);
    cout<<endl;
    cout<<d.get(1,1)<<" ";
    cout<<d.get(2,2)<<" ";
    cout<<d.get(3,3)<<" ";
    cout<<d.get(4,4)<<" ";
    cout<<d.get(3,4)<<" ";
    cout<<endl;

    d.display();
    return 0;



}