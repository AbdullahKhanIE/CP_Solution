#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    string a = "pie",b="map";
    while (t--) {
        int length,count = 0;
        string str;
        cin>>length>>str;
        for (int i = 0; i < length; i++) {
            if ((str[i]==a[0] && str[i+1] == a[1] && str[i+2] == a[2]) || (str[i]== b[0] && str[i+1] == b[1] && str[i+2] == b[2])) {
                count++;
                i+=2;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}
