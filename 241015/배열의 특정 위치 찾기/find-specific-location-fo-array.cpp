#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int input;
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        if (i % 2 == 1) {
            sum1 += input;
        }

        if (i % 3 == 2) {
            sum2 += input;
        }
    }

    cout << sum1 << " " << fixed << setprecision(1) << round((sum2 / 3) * 10 / 10);

    return 0;
}