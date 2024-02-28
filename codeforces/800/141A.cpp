#include <iostream>
#include <cstring>
using namespace std;
void sortC(char arr[],char arr2[]){

    for (int i = 1; arr[i]!='\0'; i++){
        int j = i-1, item = arr[i];
        while (j>-1 && arr[j]>item) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = item;
    }

    for (int i = 1; arr2[i]!='\0'; i++){
        int j = i-1, item = arr2[i];
        while (j>-1 && arr2[j]>item) {
            arr2[j+1]=arr2[j];
            j--;
        }
        arr2[j+1] = item;
    }
}

int main(){
    
    char a[100], b[100], match[200];
    cin>>a>>b>>match;
    int x = sizeof(b)/sizeof(b[0]);
    strncat(a,b,x);
    
    sortC(a, match);
    if (strcmp(a,match)) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

