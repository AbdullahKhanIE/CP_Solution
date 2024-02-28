#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    string a= "Tetrahedron", b ="Cube", c= "Octahedron",d= "Dodecahedron", e= "Icosahedron";

    while (n--) {
        string m;
        cin>>m;
        if (a==m) {
            count+=4;
        }
        else if (b==m) {
            count+=6;
        }
        else if (c==m) {
            count+=8;
        }
        else if (d==m) {
            count+=12;
        }
        else if (e==m) {
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}

