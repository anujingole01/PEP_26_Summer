#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target)
                return true;
        }
    }
    cout << "Element not found in the array." << endl;
    return false;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
}