#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin >> n;
        int arr[n]; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxvalue = arr[0], maxIndex = 0;
        for (int i = 1; i < n; i++) { 
            if (arr[i] > maxvalue) {
                maxvalue = arr[i];
                maxIndex = i;
            }
        }
        bool flag = true;

        while (maxvalue != 0) {
            arr[maxIndex] -= 2;
            if (maxIndex + 1 < n) {
                arr[maxIndex + 1] -= 1;
            }
            if (maxIndex - 1 >= 0) {
                arr[maxIndex - 1] -= 1;
            }

            if (arr[maxIndex] < 0 || (maxIndex + 1 < n && arr[maxIndex + 1] < 0) ||
                    (maxIndex - 1 >= 0 && arr[maxIndex - 1] < 0)) {
                flag = false;
                break;
            }
            if (flag) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
