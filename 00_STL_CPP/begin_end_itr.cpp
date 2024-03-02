#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={2,76,877,43};

    vector<int>::iterator itr;
    cout<<sizeof(int)<<endl;
    itr=v.begin();
    cout<<*itr<<endl;
   
    itr++;
    cout<<*itr<<endl;
   
    itr=v.end();
    itr--;
    cout<<*itr<<endl;
    for(itr=v.begin();itr<v.end();itr++)//itr<v.end() or itr!=v.end()
        cout<<*itr<<" ";
    cout<<endl;    
  


}