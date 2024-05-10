/*
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum. .
*/

// using sliding window
#include <iostream>
#include <climits>
using namespace std;
int findMaxSumSubArray(int arr[], int n, int k)
{

    int MaxSum = INT_MIN;
    int i=0;
    int j=0;
    int sum=0;
    while(j<n){
        sum=sum+arr[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            MaxSum=max(MaxSum,sum);
            sum=sum-arr[i];
            
            i++;
            j++;
        }
    }
    return MaxSum;
}
int main()
{
    int n = 4;
    int arr[n] = {100, 400, 200, 300};
    int k = 2;
    int MaxSumSubArray = findMaxSumSubArray(arr, n, k);
    cout << "maximum sum of all possible sub-array of size k=2 is " << MaxSumSubArray;
}