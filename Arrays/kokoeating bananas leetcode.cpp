//875 leetcode
//koko eating bananas

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while(left < right){
            int mid = left + (right - left) / 2;
            if(canEatAll(piles, h, mid)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }

    bool canEatAll(vector<int>& piles, int h, int speed){
        long long hours = 0;
        for(int pile : piles){
            hours += (pile + speed - 1) / speed;
        }
        return hours <= h;
    }
};