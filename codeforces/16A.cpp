#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string flag[n];
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        flag[i]=a;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (flag[i][j] != flag[i][j + 1]) {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (i > 0 && i < n - 1 && (flag[i][0] == flag[i - 1][0])) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
