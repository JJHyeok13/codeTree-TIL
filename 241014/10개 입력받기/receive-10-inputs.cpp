#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int input;
    int arr[10];
    double sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] == 0) {
            cout << sum << " " << fixed << setprecision(1) << round((sum / i) * 10) / 10;

            return 0;
        }
    }

    cout << sum << " " << fixed << setprecision(1) << round((sum / 10) * 10) / 10;


    return 0;
}