//leet code 485
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int currcount=0;

        for (int i : nums){
            if (i == 1){
                currcount++;
                maxcount = max(maxcount, currcount);
            }
                else {
                    currcount=0;
                }
            }
                return maxcount;
            
        }
    
};