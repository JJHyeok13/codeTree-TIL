#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char input;

    cin >> input;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == input) {
            cout << i;
            return 0;
        }
    }

    cout << "None";

    return 0;
}