#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int brr[],int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int bey = brr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            brr[j+1] = brr[j];
            j--;
        }
        arr[j + 1] = key;
        brr[j + 1] = bey;
    }
}

int main() {
    int strength,n;
    cin>>strength>>n;
    int dragon[n],stren[n];
    bool win = true;
    for (int i = 0; i < n; i++) {
        cin>>dragon[i]>>stren[i];
        sort(dragon,stren,i+1);
    }
    for (int i = 0; i < n; i++) {
        if(dragon[i]>=strength){
            win = false;
            break;
        }
        else {
            strength+=stren[i];
        }
    }
    if (win) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
