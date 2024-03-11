#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, flag=1;
        cin>>n;
        int array[n];

        if (n==1) {
            cin>>array[0];
        }
        else {
            for (int i = 0; i < n; i++) {
                cin>>array[i];
            }
            sort(array, array+n);
            for (int i = 1; i < n; i++) {
                if (array[i-1]!=array[i] && (abs(array[i]-array[i-1])!=1)) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
