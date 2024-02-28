#include <iostream>
using namespace std;

int main(){
    int  x, input, count=0;
    cin>>input;
    if (input>=100) {
        x = input/100;
        count+= x;
        input-=100*x;
    } 
    if (input >= 20) {
        x = input/20;
        count+= x;
        input-=20*x;
    }
    if (input >= 10) {
        x = input/10;
        count+= x;
        input-=10*x;
    }
    if (input >= 5) {
        x = input/5;
        count+= x;
        input-=5*x;
    }
    if (input > 0){
        count+= input;
    }

    cout<<count<<endl;
    
    
    return 0;
}
