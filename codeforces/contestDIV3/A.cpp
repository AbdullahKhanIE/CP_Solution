#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--) {
        int left, right, number, count = 0;
        cin>>left>>right>>number;
        int leftpocket[left], rightpocket[right];
        for (int i = 0; i < left; i++) {
            cin>>leftpocket[i];
        }
        for (int i = 0; i < right; i++) {
            cin>>rightpocket[i];
        }
        for (int i = 0; i < left; i++) {
            for (int j = 0; j < right; j++) {
                if (leftpocket[i]+rightpocket[j] <= number) {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
