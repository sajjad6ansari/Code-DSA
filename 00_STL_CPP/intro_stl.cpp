#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={3,45,76,34,87};
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    if(binary_search(arr,arr+5,34))
        cout<<"Present";
    else
        cout<<"absent";        
}