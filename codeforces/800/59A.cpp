#include <iostream>
using namespace std;

int main(){
    string word;
    int small = 0, cap = 0;
    cin>>word;
    for (int i = 0; i < word.length(); i++) {
        if (word[i]>=65 && word[i]<=90) {
            ++cap;
        }
        else {
            ++small;
        }
    }
    for (int i = 0; i < word.length(); i++) {
        if (cap>small && word[i]>=97 && word[i]<=122) {
            word[i]-= 32;
        }
        else if (cap<=small && word[i]>=65 && word[i]<=90) {
            word[i]+= 32;
        }
    }
    cout<<word<<endl;
    return 0;
}
