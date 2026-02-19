#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } 
        else if (type == 2) {
            lastAnswer = arr[idx][y % arr[idx].size()];
            cout << lastAnswer << endl;
        }
    }

    return 0;
}
