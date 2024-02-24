#include <iostream>
using namespace std;

int main(){

    int input;
    double avg,x;
    cin>>input;
    
    for (int i = 0; i < input; i++) {
        cin>>x;
        avg+=x;
    }
    printf("%.12f\n", avg/input);
    return 0;
}
