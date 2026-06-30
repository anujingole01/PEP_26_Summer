// Recursive Linear Search in C++
#include<iostream>
using namespace std;


bool linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return linearSearch(arr + 1, size - 1, key);
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    if(linearSearch(arr, 5, key)){
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}