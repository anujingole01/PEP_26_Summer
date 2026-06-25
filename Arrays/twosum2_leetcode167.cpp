//leetcode 167. Two sum 2- Input array is sorted

#include<iostream>
#include<vector>
using namespace std;

int twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            return left + 1; // 1-indexed
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return -1; // Not found
}