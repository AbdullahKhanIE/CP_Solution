#include <iostream>
using namespace std;

int main(){

    int input,time;
    cin>>input>>time;
    
    while (time) {
        if (input%10!=0) {
            input--;
            time--;
        }
        else {
            input/=10;
            time--;
        }
    }
    cout<<input<<endl;
    return 0;
}
