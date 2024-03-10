#include <bits/stdc++.h>
using namespace std;
int isComposite(int num){
    if (num < 4) {
        return 0;
    }
    for (int i = 2; i <= num/2; i++) {
        if (num%i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int n;
    cin>>n;

    for (int i = 4; i <= n/2; i++) {
        if (isComposite(i) && isComposite(n-i)) {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }   
    }
    return 0;
}
