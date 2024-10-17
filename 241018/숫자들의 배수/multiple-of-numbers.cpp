#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int five = 0;

    cin >> n;

    while(five != 2) {
        cout << n * i << " ";
        if ((n * i) % 5 == 0) {
            five++;
        }
        i++;
    }

    return 0;
}