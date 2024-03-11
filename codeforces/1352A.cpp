#include <iostream>
using namespace std;

int main(){

    int n, input;
    cin>>n;

    while (n--) {
        cin>>input;
        int a=input/1000, b=(input/100)%10, c=(input%100)/10, d=input%10, count =0;
        if (c!=0) {
            count++;
            c*=10;
        }
        if (b!=0) {
            count++;
            b*=100;
        }
        if (a!=0) {
            count++;
            a*=1000;
        }
        if (d!=0) {
            count++;
        }
        cout<<count<<endl;
        if (b!=0) {
            cout<<b<<" ";
        }
        if (c!=0) {
            cout<<c<<" ";
        }
        if (d!=0) {
            cout<<d<<" ";
        }
        if (a!=0) {
            cout<<a<<" ";
        }
        cout<<endl;
    }           
    return 0;
}
