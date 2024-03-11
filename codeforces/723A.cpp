#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c, mid;
    cin>>a>>b>>c;
    if ((a >= b && a <= c) || (a <= b && a >= c))
        mid = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        mid = b;
    else
        mid = c;
    
    cout<<abs(mid-a)+abs(mid-b)+abs(mid-c)<<endl;
    return 0;
}
