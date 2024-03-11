#include <bits/stdc++.h>
using namespace std;

string passLadies(string queue, int length){
    for (int i = 0; i<length; i++) {
        if (queue[i]=='B'&& queue[i+1] =='G') {
            char temp;
            temp = queue[i];
            queue[i]=queue[i+1];
            queue[i+1] = temp;
            i++;
            continue;
        }
    }
    return queue;
}

int main(){

    int length,lad;
    cin>>length>>lad;
    string queue;
    cin>>queue;
    
    for (int i = 0; i < lad; i++) {
        queue = passLadies(queue, length);
    }
    cout<<queue<<endl;
    return 0;
}
