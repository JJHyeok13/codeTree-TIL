#include <iostream>
using namespace std;

int main() {
    int R, C;
    char arr[15][15];
    int answer = 0;

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            for (int l = i + 1; l < R - 1; l++) {
                for (int k = j + 1; k < C - 1; k++) {
                    if (arr[0][0] != arr[i][j] &&
                        arr[i][j] != arr[l][k] &&
                        arr[l][k] != arr[R - 1][C - 1]) {
                        answer++;
                    }
                }
            }
        }
    }

    cout << answer;

    return 0;
}