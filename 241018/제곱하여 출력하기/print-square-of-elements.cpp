#include <iostream>
using namespace std;

int main() {
    int n;
    int input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        cout << input * input << " ";
    }

    return 0;
}