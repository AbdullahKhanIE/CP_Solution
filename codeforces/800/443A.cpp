#include <iostream>
using namespace std;

int main() {
    int letter[26] = {0}; 
    int count = 0;
    char input[1000];
    scanf(" %[^\n]s", input);

    for (int i = 0; input[i]!='\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z' && letter[input[i] - 'a'] == 0) {
            letter[input[i] - 'a'] = 1;
            count++;
        }
    }
    cout<< count << endl;
    return 0;
}


