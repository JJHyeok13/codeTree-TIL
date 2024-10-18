#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[101];
    int n;
    int min = 9999999999;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n ; j++) {
            sum += arr[j] * abs(j - i);
        }

        if (sum < min) {
            min = sum;
        }
    }

    cout << min;

    return 0;
}