    #include <iostream>
    #include <string>
    using namespace std;
     
    int main(){
     
        int n,count=0;
        cin>>n;
        string word;
        cin>>word;
        
        for (int i = 0; i < n-1; i++) {
            if (word[i] == word[i+1]) {
                ++count;
            }
        }
        cout<<count<<endl;
        return 0;
    }
