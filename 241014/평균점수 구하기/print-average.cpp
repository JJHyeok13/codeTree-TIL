#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double input;
    double sum = 0;

    for (int i = 0; i < 8; i++) {
        cin >> input;
        sum += input;
    }

    cout << fixed << setprecision(1) << round((sum / 8) * 10) / 10;

    return 0;
}