    #include <iostream>
    using namespace std;
     
    int main(){
        
        int t,res=0;
     
        cin>>t;
        while (t--) {
            string z;
            cin>>z;
            if (!(z.compare("X++"))) {
                ++res;
            }
            else if (!(z.compare("++X"))) {
                ++res;
            }
            else {
                --res;
            }
        }
        cout<<res<<endl;
    }
