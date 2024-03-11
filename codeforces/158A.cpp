    #include <iostream>
    using namespace std;
    #define N 100
    int main(){
     
        int t,limit,count =0;
        cin>> t >> limit;
        int arr[N];
     
        for (int i = 0; i < t; i++) {
            cin>>arr[i];
        }
        for (int i = 0; arr[limit-1]<=arr[i] && arr[i] && i < t; i++) {
            ++count;
        }
     
        cout<<count<<endl;
        return 0;
    }
