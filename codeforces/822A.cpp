#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num1,num2,x, fact=1;
    cin>>num1>>num2;
    
    if (num1<num2) {
        x=num1;
    }
    else {
        x=num2;
    }
    for (int i = x; i>1; i--) {
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
