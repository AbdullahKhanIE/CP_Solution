    #include <iostream>
    using namespace std;
     
    int main() {
        
        string str, str2;
        cin>>str;
        cin>>str2;
     
        for (int i = 0; str[i]!='\0'; i++) {
            str[i] = tolower(str[i]);
            str2[i] = tolower(str2[i]);
            if (str[i]>str2[i]){
                cout<<"1"<<endl;
                return 0;
            }
            else if (str[i]<str2[i]){
                cout<<"-1"<<endl;
                return 0;
            }
        }
        cout<<"0"<<endl;
        return 0;
    }
