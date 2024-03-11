#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, time;
    cin>>n>>time;
    double left = 240-time;
    
    double x1=(sqrt(25+40*left)-5)/10; 
    double x2=((sqrt(25+40*left)*(-1))-5)/10; 

    if (x1>-1&& x1<n) {
        cout<<(int)x1<<endl;
    }
    else if (x2>-1 && x2<n) {
        cout<<(int)x1<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;
}
