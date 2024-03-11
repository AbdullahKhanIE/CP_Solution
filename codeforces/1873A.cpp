#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string str1="abc", str2="bac",str3="acb",str4="cba";
    while (n--) {
        string str;
        cin>>str;
        if (str == str1 || str == str2 || str == str3 || str == str4) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
