#include <bits/stdc++.h>
using namespace std;

int main() {

    int strength, n;
    cin>>strength>>n;
    bool flag = true;
    while (n--) {
        int x,y;
        cin>>x>>y;
        if (strength>x) {
            strength+=y;
        }
        else {
            flag = false;
        }
    }
    if (flag) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
