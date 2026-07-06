//680 leetcode valid palindrome 2
//given a string s, return true if the s can be palindrome after deleting at most one character from it.

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(const string &s, int left, int right){
        while(left < right){
            if(s[left++] != s[right--]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s){
        int left = 0, right = s.length() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            }
            else{
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }
};