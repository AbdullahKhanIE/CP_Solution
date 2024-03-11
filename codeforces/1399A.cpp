#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, flag=0;
        cin>>n;
        if (n==1) {
            int array[n];
            cin>>array[0];
            cout<<"YES"<<endl;
            break;
        }
        else {
            int array[n];
            for (int i = 0; i < n; i++) {
                cin>>array[i];
            }
            sort(array, array+n);
            for (int i = 1; i < n; i++) {
                if (array[i-1]==array[i] ||(array[i]!=array[i-1]) && (array[i]-array[i-1]==1 || array[i-1]-array[i]==1)) {
                    flag = 1;
                }
                else {
                    flag=0;
                    break;
                }
            }
            if (flag) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
