//print the value of max sum and also its row index.
//if multiple rows have same max sum, return the index of last row.

#include <iostream>
using namespace std;

int findMaxSumRow(int arr[][3], int row, int col) {
    int maxSum = INT_MIN;
    int maxRowIndex = -1; 

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum >= maxSum) { 
            maxSum = sum;
            maxRowIndex = i;
        }
    }

    cout << "Max sum: " << maxSum << endl;
    return maxRowIndex;
}