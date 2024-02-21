#include <iostream>
using namespace std;
 
int main(){
 
    int n,temp,result=0;
    cin>>n;
    temp = n;
 
    while (temp) {
        if (temp>4) {
            result += temp/5;
            temp = temp%5;
        }
        else if(temp>3) {
            result += temp/4;
            temp = temp%4;
        }
        else if(temp>2) {
            result += temp/3;
            temp = temp%3;
        }
        else if(temp>1){
            result += temp/2;
            temp = temp%2;
        }
        else {
            result += temp/1;
            temp = temp%1;
        }
    }
    cout<<result<<endl;
    return 0;
}
