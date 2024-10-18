#include <iostream>
using namespace std;

int main() {
    int input;
    int max = 0;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        if (input > max) {
            max = input;
        }
    }

    cout << max;

    return 0;
}