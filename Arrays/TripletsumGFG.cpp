//gfg triplet sum

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    bool find3Numbers(vector<int> arr, int n, int X)
    {
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-2; i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == X) return true;
                else if(sum < X) left++;
                else right--;
            }
        }
        return false;
    }
};