#include <iostream>
using namespace std;

int main(){

    int count = 0, match = 0;
    string name;
    cin>>name;

    for (int i = 0; name[i] != '\0'; i++) {
            for (int j = i + 1; name[j] != '\0'; j++) {
                if (name[i] == name[j]) {
                    match++;
                    break;
                }
            }
            count++;
    }
    count -= match;
    if (count % 2 == 0){ 
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
