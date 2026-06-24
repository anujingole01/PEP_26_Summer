//question

/* int arr[] = {12,32,55,1,26,53,78}, key =53.find the key in array using linear search, if key is found and vlue of 
key > 20,then return the double key value otherwise return the half value of key and if not found key.. return -1.
 */

 #include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (key > 20) {
                return key * 2; 
            } else {
                return key / 2; 
            }
        }
    }
    return -1; 
}