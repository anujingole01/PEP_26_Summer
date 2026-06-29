#include <vector>
#include <algorithm>

//53 leetcode
// maximum subarray
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int currentSum = nums[0];
        
        for(int i = 1; i < n; i++) {
            currentSum = std::max(nums[i], currentSum + nums[i]);
            maxSum = std::max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};