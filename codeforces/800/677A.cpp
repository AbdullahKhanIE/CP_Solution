#include <iostream>
using namespace std;

int main(){
    
    int n,input,count=0;
    cin>>n>>input;

    while (n--) {
        int t;
        cin>>t;
        if (t<=input) {
            count++;
        }
        else {
            count+=2;
        }
    }
    cout<<count<<endl;
    return 0;
}
