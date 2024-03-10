#include <bits/stdc++.h>
using namespace std;

int main() {

    string tele;
    cin>>tele;
    
    for (int i = 0; i < tele.length(); i++) {
        if (tele[i] == '.') {
            cout<<"0";
        }
        else if (tele[i] == '-' && tele[i+1]== '.') {
            cout<<"1";
            i++;
        }
        else if (tele[i] == '-' && tele[i+1]== '-') {
            cout<<"2";
            i++;
        }
    }
    cout<<endl;
    return 0;
}
