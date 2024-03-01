#include <iostream>
using namespace std;
int isVowelConsonant(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'y') {
        return 0;
    }
    else {
        return 1;
    }
}
void makesmall(string &x){
    for (int i = 0; x[i]!='\0'; i++) {
        if (x[i]>='A'&&x[i]<='Z') {
            x[i]=x[i]+32;
        }
    }   
}

int main(){

    string line;
    cin>>line;
    makesmall(line);
    int i=0;
   
    while (line[i]!='\0') {
        if (isVowelConsonant(line[i])) {
            cout<<"."<<line[i];
        }
        i++;
    }
    return 0;
}
