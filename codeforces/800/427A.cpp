#include <iostream>
using namespace std;

int main() {

    int n, count = 0, off = 0;
    cin>>n;

    int crime[n];

    for (int i = 0; i < n; i++) {
        cin>>crime[i];
        if (crime[i] == -1 && off ==0) {
            count++;
        }
        else if (crime[i] > -1) {
            off += crime[i];
        }
        else{
            off--;
        }
    }

    cout<<count<<endl;
    return 0;
}
