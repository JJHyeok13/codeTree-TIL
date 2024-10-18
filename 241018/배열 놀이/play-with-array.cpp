#include <iostream>
using namespace std;

int main() {
    int n, q;
    int arr[100] = { 0, };
    int number;
    int input1, input2;

    int q2_index = 0;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> number;
        if (number == 1) {
            cin >> input1;

            cout << arr[input1 - 1] << endl;
        }
        else if (number == 2) {
            cin >> input1;

            for (int j = 0; j < n; j++) {
                if (arr[j] == input1) {
                    q2_index = j;
                    break;
                }
            }

            cout << q2_index + 1 << endl;
        }
        else {
            cin >> input1 >> input2;

            for (int i = input1 - 1; i < input2; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}