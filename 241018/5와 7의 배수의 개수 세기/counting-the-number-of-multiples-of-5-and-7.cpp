#include <iostream>
using namespace std;

int main() {
    int n;
    int input;
    int five_count = 0;
    int seven_count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input % 5 == 0) {
            five_count++;
        }

        if (input % 7 == 0) {
            seven_count++;
        }
    }

    cout << five_count << endl;
    cout << seven_count;

    return 0;
}