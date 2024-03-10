#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =4, array[n];

    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    sort(array,array+n);
    cout<<array[3]-array[2]<<" "<<array[3]-array[1]<<" "<<array[3]-array[0]<<" "<<endl;
    return 0;
}
