#include <iostream>
using namespace std;

int main() {
    int input;
    
    for (int i = 0; i < 100; i++) {
        cin >> input;

        if (input == 0) {
            break;
        }

        if (input % 2 == 0) {
            cout << input / 2 << " ";
        }
        else {
            cout << input + 3 << " ";
        }
    }

    return 0;
}