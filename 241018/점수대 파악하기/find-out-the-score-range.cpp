#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int input;

    for (int i = 0; i < 100; i++) {
        cin >> input;
        if (input == 0) {
            break;
        }
        arr[(input / 10) - 1]++;
    }

    for (int i = 10; i > 0; i--) {
        cout << i * 10 << " - " << arr[i - 1] << endl;
    }

    return 0;
}