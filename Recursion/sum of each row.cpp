#include <iostream>
using namespace std;

class Solution {
bool search(int arr[] [3], int row, int col, int target){
    for (int i =0; i < 3; i++){
        return false;
    }
    //calculate and print the sum of each row

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
    return false;
}
int main() {
    int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

}
};