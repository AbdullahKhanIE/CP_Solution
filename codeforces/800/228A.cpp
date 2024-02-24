#include <iostream>
using namespace std;

int main(){

    int x=0;
    int a[4];

    for (int i = 0; i < 4; i++) {
        cin>>a[i];
        for (int j=0; (i!=0 && j<i); j++) {
            if (a[i]==a[j]) {
                ++x;
                break;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
