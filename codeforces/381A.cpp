#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int card[n];
    
    for (int i = 0; i < n; i++) {
        cin>>card[i];
    }
    int first = 0, Sereja = 0, Dima = 0, last = n-1, i = 1;
    while (n--) {
        if (i%2){
            if (card[first] > card[last]){
                Sereja+=card[first];
                first++;
            }
            else {
                Sereja+=card[last];
                last--;
            }
        }
        else {
            if (card[first] > card[last]){
                Dima+=card[first];
                first++;
            }
            else {
                Dima+=card[last];
                last--;
            }
        }
        i++;
    }
    cout<<Sereja<<" "<<Dima<<endl;
    return 0;
}
