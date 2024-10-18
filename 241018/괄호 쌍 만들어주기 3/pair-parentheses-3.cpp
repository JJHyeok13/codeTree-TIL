#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cin >> str;

    int size = str.size();

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (str[i] == ')') {
                break;
            }
            else {
                if (str[j] == ')') {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}