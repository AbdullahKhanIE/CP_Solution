#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    while (n--) {
        string num;
        cin>>num;
        if (num[0]+num[1]+num[2]==num[3]+num[4]+num[5]) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
