//GFG first repeating character

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
char firstRepChar(string s) {
    vector<int> freq(26, 0);

    for(char ch : s) {
        freq[ch - 'a']++;
    }

    for(char ch : s) {
        if(freq[ch - 'a'] > 1) {
            return ch;
        }
    }

    return '#';
}
};  