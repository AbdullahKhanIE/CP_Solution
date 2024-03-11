#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,sum=0,calc=0, countCoin=0;
    cin>>n;
    int coin[n];

    for (int i = 0; i < n; i++) {
        cin>>coin[i];
        sum+=coin[i];
    }
    sort(coin, coin+n);

    for (int i = n-1; calc<=sum/2; i--) {
        calc +=coin[i];
        countCoin++;
    }
    cout<<countCoin<<endl;
    return 0;
}
