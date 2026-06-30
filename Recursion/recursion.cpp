//simple recursion factorial

#include <iostream>
using namespace std;
class Factorial{

public:
    int fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
};