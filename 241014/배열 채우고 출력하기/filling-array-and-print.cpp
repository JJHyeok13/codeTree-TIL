#include <iostream>
#include <vector>
using namespace std;

int main() {
    char input;
    vector<char> v;

    for (int i = 0; i < 10; i++) {
        cin >> input;

        v.push_back(input);
    }

    for (int i = 9; i >= 0; i--) {
        cout << v[i];
    }

    return 0;
}