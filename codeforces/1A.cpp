#include <cmath>
#include <iostream>
using namespace std;

int main(){
    
    long double n,m,a;
    cin>>n>>m>>a;
    long long int x = ceil(m/a)*ceil(n/a);
    cout<<x<<endl;
    return 0;
}
