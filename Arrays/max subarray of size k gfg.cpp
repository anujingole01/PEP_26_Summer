//gfg max sum subarray of size k

#include<iostream>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
 
    int current_sum = max_sum;
    for (int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}