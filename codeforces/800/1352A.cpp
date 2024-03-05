#include <iostream>
using namespace std;

int main(){
    int  x, n;
    cin>>n;
    while (n--) {
        int input,count=0, print = 0;
        cin>>input;
        if (input>=100) {
            x = input/100;
            count+= x;
            input-=100*x;
            print++;

        } 
        if (input >= 20) {
            x = input/20;
            count+= x;
            input-=20*x;
            print++;
        }
        if (input >= 10) {
            x = input/10;
            count+= x;
            input-=10*x;
            print++;
        }
        if (input >= 5) {
            x = input/5;
            count+= x;
            input-=5*x;
            print++;
        }
        if (input > 0){
            count+= input;
            print++;
        }
        cout<<print<<endl;
        continue;
    }

    
    
    return 0;
}
