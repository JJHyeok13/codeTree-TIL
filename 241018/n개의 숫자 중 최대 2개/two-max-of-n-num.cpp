#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int max1 = 0;
    int max2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    }
    else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    cout << max1 << " " << max2;

    return 0;
}