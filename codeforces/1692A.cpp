#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while (n--) {
        int count =0, input;
        cin>>input;
        for (int i = 1; i < 4; i++) {
            int temp;
            cin>> temp;
            if (temp>input) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
