#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 2;

    cin >> n;

    int value = n;

    while(1) {
        cout << value << " ";

        if (value % 10 == 0) {
            break;
        }

        if (value > 200) {
            break;
        }

        value = n * i;
        i++;
    }

    return 0;
}