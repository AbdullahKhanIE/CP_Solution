#include <iostream>
using namespace std;

int main(){

    string words, rev, wordt;
    cin>>words>>wordt;
    int length = words.length();

    if (length == wordt.length()) {
        for (int i = 0; i < length; i++) {
            if (words[i]!=wordt[length-1-i]) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
