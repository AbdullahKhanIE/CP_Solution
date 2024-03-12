#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,sum=0;
    cin>>n;

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        sum+=x;
    }
    int res = (int)ceil(sum/4.0);

    if (res<=n) {
        cout<<n<<endl;
    }
    else {
        cout<<res<<endl;
    }
    return 0;
}
