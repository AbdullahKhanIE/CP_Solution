#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        long double a,b;
        cin>>a>>b;
        if (a==b) {
            cout<<"0"<<endl;
            continue;
        }
        cout<<(int)ceil(abs(a-b)/10)<<endl;
    }
    
    return 0;
}
