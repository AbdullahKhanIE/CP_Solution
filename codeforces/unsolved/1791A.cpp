#include <bits/stdc++.h>
using namespace std;

int main(){
    string comp = "codeforces";
    int t; cin>>t; while (t--) {
        char x; cin>>x;
        bool flag = false;
        for (int i = 0; i < 10; i++) {
            if (comp[i]==x) {
                flag = true;
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
    return 0;
}
