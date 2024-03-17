#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while (t--) {

        int x;
        cin>>x;
        int array[x],flag=-1;
        
        if (x<3) {
            for (int i = 0; i < x; i++) {
                cin>>array[i];
            }
        }
        else {
            for (int i = 0; i < x; i++) {
                cin>>array[i];
            }
            sort(array,array+x);
            for (int i = x; i>=2; i--) {
                if (array[i] == array[i-1] && array[i-1] == array[i-2] && array[i-2] == array[i]) {
                    flag = array[i];
                    break;
                }
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}
