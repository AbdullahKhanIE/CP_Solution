#include <iostream>
using namespace std;

int main(){

    string a = "I hate ", b = "I love ", c = "that ";
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        if (i%2) {
            cout<<b;
        }
        else {
            cout<<a;
        }
        if (i==n-1) {
            cout<<"it ";
        }
        else {
            cout<<c;
        }
    }
    cout<<endl;
    return 0;
}
