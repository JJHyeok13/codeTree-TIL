#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min = 0, max = 0;
    int input;

    while(1) {
        cin >> input;

        if (abs(input) == 999) {
            break;
        }

        if (input > max) {
            max = input;
        }

        if (input < min) {
            min = input;
        }
    }

    cout << max << " " << min;

    return 0;
}