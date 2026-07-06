//lc 392 is subsequence

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(int j=0;j<t.size() && i<s.size();j++){
            if(s[i]==t[j]){
                i++;
            }
        }
        return i==s.size();
    }
};