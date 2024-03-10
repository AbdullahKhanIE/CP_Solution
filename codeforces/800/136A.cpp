#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int t,n;
    cin>>t;
    int array[t+1];
    for (int i = 1; i <= t; i++) {
        cin>>n;
        array[n]=i;
    }
    for (int i = 1; i <= t; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
