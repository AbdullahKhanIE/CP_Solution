#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {

    string word;
    cin>>word;
    bool flag = true;

    for (int i = 1; i < word.length(); i++) {
        if (islower(word[i])) {
            flag = false;
            break;
        }
    }
    if (flag) {
        if (islower(word[0])) {
            word[0]=toupper(word[0]);
        }
        else {
            word[0]=tolower(word[0]);
        }
        for (int i = 1; i < word.length(); i++) {
            word[i]=tolower(word[i]);
        }
    }
    cout<<word<<endl;
    return 0;
}
