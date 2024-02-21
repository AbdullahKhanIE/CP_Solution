#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++) {

        cin>>arr[i];
        int x = arr[i];

        for (int j = 0; j < n; j++) {
            if (i!=j && x>1){
                ++arr[j];
                --x;
            }
            else {
                continue;
            }
        }
        arr[i]=x;
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
