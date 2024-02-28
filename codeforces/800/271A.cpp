#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    while(1){
        n++;
        int a = n/1000, b = (n/100)%10, c = (n%100)/10, d = (n%100)%10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout<<n<<endl;
            return 0;
        }
    }
    return 0;
}
