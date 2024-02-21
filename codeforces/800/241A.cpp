    #include <iostream>
    using namespace std;
    int main(){
     
        int input, count = 0;
        cin>>input;
        int array[input][3];
        
        for (int i = 0; i < input; i++)
        {
            int flag = 0;
            for (int j = 0; j < 3; j++){
                cin>>array[i][j];
                if (array[i][j] == 1){
                    flag++;
                }
            }
            if (flag >= 2){
                count++;
            }
        }
        cout<<count<<endl;
        return 0;
    }
