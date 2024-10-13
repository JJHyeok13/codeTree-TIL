#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int input;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input % 2 == 0) {
            v.push_back(input);
        }
    }

    int size = v.size();

    if (size == 0) {
        cout << 0;
    }
    else {
        for (int i = size - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
    }

    return 0;
}