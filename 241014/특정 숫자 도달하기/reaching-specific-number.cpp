#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int input;
    double sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        if (input < 250) {
            sum += input;
        }
        else {
            cout << sum << " " << fixed << setprecision(1) << round((sum / i) * 10) / 10;
            return 0;
        }
    }

    cout << sum << " " << fixed << setprecision(1) << round((sum / 10) * 10) / 10;

    return 0;
}