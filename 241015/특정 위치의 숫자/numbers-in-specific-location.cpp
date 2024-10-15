#include <iostream>
using namespace std;

int main() {
    int input;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        if (i == 2 | i == 4 | i == 9)
        sum += input;
    }

    cout << sum;

    return 0;
}