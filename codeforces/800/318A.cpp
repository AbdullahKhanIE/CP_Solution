#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n,x;
    cin>>n>>x;
    long long int f=ceil(n/2.0);
  
    if(x<=f){
        cout<<2*x-1<<endl;
    }
    else{
        cout<<2*(x-f)<<endl;
    }
    return 0;
}
