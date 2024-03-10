#include <bits/stdc++.h>
using namespace std;

int search (int arr[], int n){
    for (int i = 2; i < n; i++) {
        if (arr[0]!= arr[i]) {
            return i;
        }
    }
    return -4;
}
int main() {

    int x;
    cin>>x;
    while (x--) {
        int n,count=0;
        cin>>n;
        int array[n];
        cin>>array[0];
        cin>>array[1];
        cin>>array[2];

        for (int i = 3; i < n; i++) {
            cin>>array[i];
        }
        if (array[0] == array [1] && array[1] == array [2] && array [0]) {
            count = search(array, n)+1;
        }
        else if (array[0]!=array[1] && array[1]==array[2] && array[2]!=array[0]) {
            count=1;
        }
        else if (array[0]!=array[1] && array[1]!=array[2] && array[2]==array[0]) {
            count=2;
        }
        else if (array[0]==array[1] && array[1]!=array[2] && array[2]!=array[0]) {
            count=3;
        }
        cout<<count<<endl;
    }
    return 0;
}
