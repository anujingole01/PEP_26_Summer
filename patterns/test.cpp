#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    cin >> x >> y;

    if (x > 50 && y > 10) {
        cout << "student is passed" << endl;
    }
    else {
        cout << "student is failed" << endl;
    }

    return 0;
}