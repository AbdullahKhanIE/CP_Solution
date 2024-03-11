#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {

        string square;
        cin>>square;
        int length = square.length(), flag = 1;
        
        if (length%2) {
            flag = 0;
        }
        else {
            length = length/2;
            for (int i = 0; i < length; i++) {
                if (square[i]!=square[i+(length)]) {
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
