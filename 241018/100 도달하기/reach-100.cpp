#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a = 1;
    int b = n;
    int c;

    cout << a << " " << b << " ";

    while(1) {
        c = a + b;
        cout << c << " ";

        a = b;
        b = c;

        if (c > 100) {
            break;
        }
    }

    return 0;
}