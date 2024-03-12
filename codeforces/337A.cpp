#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int puzzle[m];
    for (int i = 0; i < m; i++) {
        cin>>puzzle[i];
    }
    sort(puzzle,puzzle+m);
    cout<<puzzle[n-1]-puzzle[0]<<endl;
    return 0;
}
