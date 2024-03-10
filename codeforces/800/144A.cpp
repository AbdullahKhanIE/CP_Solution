#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n], max_indexx = 0, count=0;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
        if (array[i] > array[max_indexx]) {
            max_indexx = i;
        }
    }
    for (int i = max_indexx; i > 0; i--) {
        int temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
        count++;
    }
    max_indexx=n-1;
    for (int i = n-1; i >= 0; i--) {
        if (array[i] < array[max_indexx]) {
            max_indexx = i;
        }
    }
    cout <<count+(n-max_indexx)-1<< endl;
    return 0;
}

