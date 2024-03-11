#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,sum=0, whole = 0, count = 0;
    cin>>n;
    for (int i = 1; whole <= n ; i++) {
            sum+=i;
            whole+=sum;
            count++;
    }
    cout<<count-1<<endl;
    return 0;
}
