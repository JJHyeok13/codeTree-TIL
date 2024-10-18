#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    int input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == 2) {
            cnt++;
        }

        if (cnt == 3) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}