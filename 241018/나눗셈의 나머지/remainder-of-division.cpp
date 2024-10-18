#include <iostream>
using namespace std;

int main() {
    int a, b;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int sum = 0;

    cin >> a >> b;

    while(1) {
        arr[a % b]++;
        a /= b;

        if (a <= 1) {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        sum += arr[i] * arr[i];
    }

    cout << sum;


    return 0;
}