#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    string word = "Timru";
    int n;
    cin>>n;

    while (n--) {

        int x;
        string name;
        cin>>x;
        cin>>name;

        if (x!=5) {
            cout<<"NO"<<endl;
            continue;
        }
        else {
            sort(name.begin(),name.end());
            if (name == word) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
