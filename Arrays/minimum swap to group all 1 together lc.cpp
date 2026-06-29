//leetcode 2134
// 2134. Minimum Swaps to Group All 1's Together II

#include<iostream>
#include<vector>
using namespace std;
    
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int countOnes = 0;
        for (int num : nums) {
            if (num == 1) {
                countOnes++;
            }
        }

        if (countOnes == 0 || countOnes == n) {
            return 0; 
        }

        vector<int> circularArray(nums.begin(), nums.end());
        circularArray.insert(circularArray.end(), nums.begin(), nums.end());

        int maxOnesInWindow = 0;
        int currentOnesInWindow = 0;

        for (int i = 0; i < circularArray.size(); i++) {
            if (circularArray[i] == 1) {
                currentOnesInWindow++;
            }

            if (i >= countOnes) {
                if (circularArray[i - countOnes] == 1) {
                    currentOnesInWindow--;
                }
            }

            if (i >= countOnes - 1) {
                maxOnesInWindow = max(maxOnesInWindow, currentOnesInWindow);
            }
        }

        return countOnes - maxOnesInWindow; 
    }
};