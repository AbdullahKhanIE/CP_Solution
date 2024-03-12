//https://codeforces.com/problemset/gymProblem/464282/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if (a<b) {
        swap(a,b);
    }
    int ta =a, tb = b;

    while (a--) {
        cout<<tb;
    }
    while (b--) {
        cout<<ta;
    }
    return 0;
}

