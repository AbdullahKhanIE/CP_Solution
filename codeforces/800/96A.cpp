#include <iostream>
using namespace std;

int main(){

    string player;
    cin>>player;
    if (player.length()>6) {
        for (int i = 0; player[i+6]!='\0'; i++) {
            if ((player[i+0] == '0' && player [i+1] == '0' && player [i+2] == '0'&& player [i+3] == '0'
                && player [i+4] == '0'&& player [i+5] == '0'&& player [i+6] == '0')|| (player[i+0] == '1' 
                && player [i+1] == '1' && player [i+2] == '1'&& player [i+3] == '1'&& player [i+4] == '1'
                && player [i+5] == '1'&& player [i+6] == '1')) {
                
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
