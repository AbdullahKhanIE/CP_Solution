#include <iostream>
using namespace std;

int main(){

    int n,a=0,d=0;
    string game;
    cin>>n>>game;

    for (int i = 0; i < n; i++) {
        if (game[i]=='A') {
            ++a;
        }
        else if (game[i] == 'D') {
            ++d;
        }
    }
    if (a<d) {
        cout<<"Danik"<<endl;
    }
    else if (d<a) {
        cout<<"Anton"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
