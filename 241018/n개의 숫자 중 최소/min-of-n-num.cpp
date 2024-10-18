#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int min = 0;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (i == 0) {
            min = arr[i];
        }

        if (min > arr[i]) {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            count++;
        }
    }

    cout << min << " " << count;

    return 0;
}