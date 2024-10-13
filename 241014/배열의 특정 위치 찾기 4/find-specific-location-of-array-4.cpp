#include <iostream>
using namespace std;

int main() {
    int input;
    int count = 0;
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> input;

        if (input == 0) {
            cout << count << " " << sum;
            return 0;
        }
        else if (input % 2 == 0) {
            count++;
            sum += input;
        }
    }
    
    cout << count << " " << sum;

    return 0;
}