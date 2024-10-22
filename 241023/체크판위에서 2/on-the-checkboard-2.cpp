#include <iostream>
using namespace std;

int main() {
    int R, C;
    char arr[16][16];
    int answer = 0;

    cin >> R >> C;

    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= R - 1; i++) {
        for (int j = 1; j <= C - 1; j++) {
            for (int l = i + 1; l <= R - 2; l++) {
                for (int k = j + 1; k <= C - 2; k++) {
                    if (arr[1][1] != arr[i][j] &&
                        arr[i][j] != arr[l][k] &&
                        arr[l][k] != arr[R][C]) {
                        answer++;
                    }
                }
            }
        }
    }

    cout << answer;

    return 0;
}