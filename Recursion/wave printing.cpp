//print 1st coloum and then 2nd column reverse then 3 rd column and 4th reverse

#include <iostream>
using namespace std;

class Solution {

    void printColoum(int arr[][4], int row, int col) {
        for(int j = 0; j < col; j++) {
            if(j % 2 == 0) {
                for(int i = 0; i < row; i++) {
                    cout << arr[i][j] << " ";
                }
            } else {
                for(int i = row - 1; i >= 0; i--) {
                    cout << arr[i][j] << " ";
                }
            }
        }
    }
};

