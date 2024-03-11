#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--) {
        int game[4], max1,max2;
        for (int i = 0; i < 4; i++) {
            cin>>game[i];
        }
        if (game[0]>game[1]) {
            max1=game[0];
        }
        else {
            max1=game[1];
        }
        if (game[2]>game[3]) {
            max2=game[2];
        }
        else {
            max2=game[3];
        }
        sort(game, game+4);
        if ((max1 == game[2] || max1 == game[3])&&(max2 == game[2] || max2 == game[3])) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
