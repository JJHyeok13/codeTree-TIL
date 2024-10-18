#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    int answer = abs(sqrt(a) - sqrt(b));

    cout << answer;

    return 0;
}