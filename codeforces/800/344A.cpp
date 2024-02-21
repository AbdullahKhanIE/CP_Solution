#include <iostream>
using namespace std;

int main(){
    
    int n, count=0, k=0;
    string magnet;
    cin>>n;
    int length = 2*n; 
    int array[length];

    while(n--) {
        cin>>magnet;
        array[k]=magnet[0];
        ++k;
        array[k]=magnet[1];
        ++k;
    }
    for (int i = 0;i<length-2; i++) {
        if (array[i]==array[i+1]) {
            count++;
        }
    }
    cout<<count+1<<endl;
    return 0;
}
