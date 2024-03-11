#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    while (n--) {
        int x,a;
        cin>>x;
        if (x<3) {
            cout<<"0"<<endl;
            continue;
        }
        else{
            a = (x/2)+1;
        }
        cout<<x-a<<endl;
    }
    return 0;
}
