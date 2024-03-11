    #include <cstdlib>
    #include <iostream>
    using namespace std;
     
    int main(){
     
        int n=5;
        int arr[n][n];
        int x,y;
     
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin>>arr[i][j];
                if (arr[i][j]==1) {
                    x=i,y=j;
                }
            }
        }
        cout<<abs((2-x))+abs((2-y));
     
        return 0;
    }
