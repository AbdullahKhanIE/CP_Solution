#include <iostream>
using namespace std;

int main() {

    int input;
    cin>>input;

    if (input <= 100 && input > 0){
        for (int i = 1; i <= input; i++){
            int n;
            cin>>n;

            if (n == 1){
                cout<<"Hard"<<endl;
                return 0;
            }
        }
        cout<<"Easy"<<endl;
    }
    return 0;
}
