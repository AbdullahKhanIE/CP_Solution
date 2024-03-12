#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,mishka=0,chris=0;
    cin>>t;
    while (t--) {
        int m,c;
        cin>>m>>c;
        mishka+=m;
        chris+=c;
    }
    if (mishka==chris) {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if (mishka>chris) {
        cout<<"Mishka"<<endl;
    }
    else if (chris>mishka) {
        cout<<"Chris"<<endl;
    }
    return 0;
}
