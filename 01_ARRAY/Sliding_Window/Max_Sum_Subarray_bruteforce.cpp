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

// using brute force
#include <iostream>
#include <climits>
using namespace std;
int findMaxSumSubArray(int arr[], int n, int k)
{

    int MaxSum = INT_MIN;
    for (int i = 0; i < n-k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }
        if (sum > MaxSum)
        {
            MaxSum = sum;   
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