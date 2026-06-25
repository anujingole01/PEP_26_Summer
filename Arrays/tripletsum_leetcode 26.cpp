//leetcode 26 

#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
    public:
    bool find3Numbers(std::vector<int> A, int n, int X)  
    { 
        std::sort(A.begin(), A.end());
        for(int i=0; i<n-2; i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = A[i] + A[left] + A[right];
                if(sum == X){
                    return true;
                }
                else if(sum < X){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return false;
    }
};