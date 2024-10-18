#include <iostream>
using namespace std;

int main() {
    int arr[6] = {0, 0, 0, 0, 0, 0};
    int input;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        arr[input - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " - " << arr[i] << endl;
    }

    return 0;
}