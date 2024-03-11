#include <iostream>
using namespace std;

int main(){
    
    int k,r,i,buries=10;
    cin>>k>>r;
    
    for (i=0; !((k*i)%10 == r); i++) {
        if( (k*i)%buries == 0){
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}
