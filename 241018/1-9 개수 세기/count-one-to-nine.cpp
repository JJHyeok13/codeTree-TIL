#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        arr[input - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}