#include <iostream>
using namespace std;

int main() {
    int input;
    cin>>input;

    if (input < 163 && input > 0){
        for (int i = 0; i < input; i++){
            int a, b, c;
            cin>>a>>b>>c;
            if (a + b == c) {
                cout<<"+"<<endl;
            }
            else if (a - b || b - a == c){
                cout<<"-"<<endl;
            }
        }
    }
    return 0;
}
