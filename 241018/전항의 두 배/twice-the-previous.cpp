#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[10];

    cin >> n >> m;

    arr[0] = n;
    arr[1] = m;

    for (int i = 2; i < 10; i++) {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}