#include <cstring>
#include <iostream>
using namespace std;

int main(){
    int n = 200;
    char one[n],two[n], sum[n];   
    cin>>one>>two>>sum;
    if (strlen(one)<=100) {
        strcat(one, two);
        if (strcmp(one, sum) == 0){
            cout<<"YES"<<endl;
        }
        else {
        cout<<"NO"<<endl;
        }
    }
    return 0;
}
