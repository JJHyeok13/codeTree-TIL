#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;
    double input;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        sum += input;
    }

    double average = round((sum / n) * 10) / 10;

    cout << average << endl;

    if (average >= 4.0) {
        cout << "Perfect";
    }
    else if (average < 3.0) {
        cout << "Poor";
    }
    else {
        cout << "Good";
    }

    return 0;
}