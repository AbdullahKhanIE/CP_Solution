    #include <iostream>
    using namespace std;
     
    int main(){
        int input;
        string word;
        cin>>input;
        if (input > 0 && input < 101){
            while (input--){
                cin>>word;
                int x = word.length();
                if (x > 10){
                    cout<<word[0]<<x - 2<<word[x - 1]<<endl;
                }
                else{
                    cout<<word<<endl;
                }
            }
        }
        return 0;
    }
