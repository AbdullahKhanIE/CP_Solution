    #include <iostream>
    using namespace std;
     
    int main() {
     
        int k,n,w,sum=0;
        cin>>k>>n>>w;
        int temp = k;
     
        for (int i = 0; i < w; i++) {
            sum+=temp;
            temp+=k;
        }
        if(sum-n>0){
            cout<<sum-n<<endl;
            return 0;
        }
        cout<<"0"<<endl;
        return 0;
    }
