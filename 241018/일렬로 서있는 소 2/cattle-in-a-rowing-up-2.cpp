#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101];
    int count = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (arr[i] <= arr[j] & arr[j] <= arr[k]) {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}