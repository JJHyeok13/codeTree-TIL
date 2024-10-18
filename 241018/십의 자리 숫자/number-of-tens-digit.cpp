#include <iostream>
using namespace std;

int main() {
    int arr[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int input;

    while(1) {
        cin >> input;

        if (input == 0) {
            break;
        }
        arr[(input / 10) - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << i + 1 << " - " << arr[i] << endl;
    }

    return 0;
}