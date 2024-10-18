#include <iostream>
using namespace std;

int main() {
    char c;
    int input;
    int arr[4] = {0, 0, 0, 0};

    for (int i = 0; i < 3; i++) {
        cin >> c >> input;

        if (c == 'Y') {
            if (input > 37) {
                arr[0]++;
            }
            else {
                arr[2]++;
            }
        }
        else {
            if (input > 37) {
                arr[1]++;
            }
            else {
                arr[3]++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    if (arr[0] >= 2) {
        cout << "E";
    }

    return 0;
}