#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,count=0,test, max,min;
    cin>>n>>test;
    n--;
    max = test, min = test;
    while (n--) {
        cin>>test;
        if (test < min) {
            min = test;
            count++;
        }
        if (test > max) {
            max = test;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
