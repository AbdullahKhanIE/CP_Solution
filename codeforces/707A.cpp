#include <bits/stdc++.h>
using namespace std;

int main() {

    int m,n,flag=0;
    cin>>m>>n;

    char x;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>>x;
            if (x == 'C' || x == 'M' || x == 'Y') {
                flag = 1;
            }
        }
    }
    if (flag) {
        cout<<"#Color"<<endl;
    }
    else {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
