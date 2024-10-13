#include <iostream>
using namespace std;

int main() {
    int n;
    int input;
    int pass_cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            cin >> input;
            sum += input;
        }
        if (sum / 4 < 60) {
            cout << "fail" << endl;
        }
        else {
            pass_cnt++;
            cout << "pass" << endl;
        }
    }

    cout << pass_cnt;

    return 0;
}