#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int manhattan_distance(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> checkpoints(n);
    
    for (int i = 0; i < n; i++) {
        cin >> checkpoints[i].first >> checkpoints[i].second;
    }

    int total_distance = 0;
    for (int i = 0; i < n - 1; i++) {
        total_distance += manhattan_distance(checkpoints[i], checkpoints[i + 1]);
    }

    int min_distance = total_distance;
    for (int i = 1; i < n - 1; i++) {
        int skipped_distance = total_distance
                               - manhattan_distance(checkpoints[i - 1], checkpoints[i])
                               - manhattan_distance(checkpoints[i], checkpoints[i + 1])
                               + manhattan_distance(checkpoints[i - 1], checkpoints[i + 1]);

        min_distance = min(min_distance, skipped_distance);
    }

    cout << min_distance << endl;

    return 0;
}