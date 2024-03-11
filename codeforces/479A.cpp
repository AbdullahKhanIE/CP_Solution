#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sum[] = {a + (b * c), a * (b + c), a * b * c,(a + b) * c, a+b+c};
    sort(sum, sum+5);
    cout<<sum[4]<<endl;
    return 0;
}

