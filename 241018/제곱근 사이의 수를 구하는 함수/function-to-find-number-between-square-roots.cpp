#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    int answer = 0;

    cin >> a >> b;

    if (a > b) {
        answer = floor(sqrt(a)) - floor(sqrt(b));
    }
    else {
        answer = floor(sqrt(b)) - floor(sqrt(a));
    }

    cout << answer;

    return 0;
}