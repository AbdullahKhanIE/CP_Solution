#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,output=0;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin>> array[i];
    }
    if (n==1) {
        cout<<output<<endl;
        return 0;
    }
    sort(array, array + n);
    for (int i = 0; i < n-1; i++) {
        output+= array[n-1]-array[i];
    }
    cout<<output<<endl;

    return 0;
}
