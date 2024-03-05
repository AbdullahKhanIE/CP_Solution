#include <bits/stdc++.h> 
using namespace std;

int main() {

    int input;
    string yes="yes", str;
    cin>>input;

    while (input--) {
        cin>>str;
        transform(str.begin(), str.end(),  str.begin(), ::tolower);
        if (yes == str) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
