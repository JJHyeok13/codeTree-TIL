#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int arr[21][21];
    int answer = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - 2; j++) {
            answer = max(answer, arr[i][j] + arr[i][j + 1] + arr[i][j + 2]);
        }
    }

    cout << answer;
    
    return 0;
}