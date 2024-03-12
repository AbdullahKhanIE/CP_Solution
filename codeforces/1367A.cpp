#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--) {
        string a;
        cin>>a;
        int len = a.length();
        for(int i=0; i<len-1; i++){
            if(i == 0){
                cout<<a[i];
            }
            else if(a[i] == a[i-1]){
                cout<<a[i];
                i++;
            }
        }
        cout<<a[len-1]<<endl;
    }
    return 0;
}
