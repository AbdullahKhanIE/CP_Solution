#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int game[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin>>game[i][j];       
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            sum+=game[j][i];       
        }
        if (sum!=0) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
