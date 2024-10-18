#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    int answer = 0;

    cin >> a >> b;

    if (a > b) {
        answer = sqrt(a) - sqrt(b);
    }
    else {
        answer = sqrt(b) - sqrt(a);
    }

    cout << answer;

    return 0;
}