#include <iostream>
using namespace std;

int main() {
    int input;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> input;
        sum += input;
    }

    cout << sum;
    
    return 0;
}