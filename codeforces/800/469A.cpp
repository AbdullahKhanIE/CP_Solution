#include <iostream>
using namespace std;

int main() {

    int n,l1,l2,x;
    cin >> n;
    int arr[n];

    cin>>l1;
    for (int i = 0; i < l1; i++) {
        cin>>x;
        if (x<=n&& x>0) {
            arr[x-1]=x;
        }
    }

    cin>>l2;
    for (int i = 0; i < l2; i++) {
        cin>>x;
        if (x<=n&& x>0) {
            arr[x-1]=x;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i]!=i+1) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}

