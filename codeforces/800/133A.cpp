#include <bits/stdc++.h>
using namespace std;

int main() {

    string hq;
    cin>>hq;

    for (int i = 0; i < hq.length(); i++) {
        if (( hq[i]>=33 && hq[i]<=126 ) && (hq[i]=='H' || hq[i] == 'Q' || hq[i] == '9')) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
