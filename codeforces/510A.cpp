#include <iostream>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;
    int state = 0;

    for (int i = 0; i < x; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < y; j++) {
                cout << "#";
            }
        } 
        else {
            if (state == y-1) {
                state = 0;
            }
            else {
                state = y-1;
            }
            for (int j = 0; j < y; j++) { 
                if (state == j) {
                    cout << "#";
                }
                else {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}

