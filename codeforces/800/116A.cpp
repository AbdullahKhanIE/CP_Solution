#include <iostream>
using namespace std;

int main(){
    
    int n,count=0,sum=0;
    cin>>n;
    
    while (n--) {
        int i,j;
        cin>>i>>j;
        count-=i;
        count+=j;
        if (count>=sum) {
            sum=count;
        }
    }
    cout<<sum<<endl;
    return 0;
}
