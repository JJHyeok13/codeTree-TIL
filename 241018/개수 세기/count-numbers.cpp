#include <iostream>
using namespace std;

int main() {
    int n, m;
    int input;
    int count = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == m) {
            count++;
        }
    }

    cout << count;

    return 0;
}