#include <iostream>
using namespace std;

 int main(){

    int n;
    cin>>n;

    while (n--) {

        int a,b;
        cin>>a>>b;
        
        if (a<b) {
            cout<<b-a<<endl;
        }
        else if (a%b) {
              int x = a/b;
            cout<<b*(x+1)-a<<endl;
        }
        else {
            cout<<"0"<<endl;
        }

        


    }
    return 0;
}
