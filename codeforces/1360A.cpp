#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    while (n--) {
        int a, b, x,y,size;
        cin>>a>>b;
        x = max(2*a,b);
        y = max(2*b,a);
        if (x>y) {
            size = y;
        }
        else {
            size = x;
        }
        cout<<size*size<<endl;
    }
    return 0;
}
