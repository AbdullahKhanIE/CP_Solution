#include <iostream>
using namespace std;

int main(){

    int n,count=0;
    cin>>n;

    while (n--) {
        int i,j;
        cin>>i>>j;
        if (j-i>1) {
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}
