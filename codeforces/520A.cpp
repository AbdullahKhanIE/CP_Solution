#include <iostream>
using namespace std;

int main() {

    int letter[26] = {0}, n, count = 0;
    string input;
    cin>>n;
    cin >> input;


    for (int i = 0; i < n; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i]=input[i]+32;
        }
        if (letter[input[i] - 'a'] == 0) {
            letter[input[i] - 'a'] = 1;
            count++;
        }
    }
    if (count==26) {
       cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
