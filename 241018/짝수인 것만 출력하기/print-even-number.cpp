#include <iostream>
using namespace std;

int main() {
    int n;
    int input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input % 2 == 0) {
            cout << input << " ";
        }
    }

    return 0;
}