#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;//address of a
    cout << &a << endl;//address of a
    cout << *ptr << endl;//number in address
    cout<< *(ptr+1)<<endl;//garbage value
}