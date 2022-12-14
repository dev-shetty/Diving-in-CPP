#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[] = {10, 20, 30, 40, 50};
    const int SIZE_OF_ARRAY = sizeof(arr)/sizeof(arr[0]);
    int temp, i=0;
    while(i < SIZE_OF_ARRAY) {
        temp = arr[i];
        arr[i] = arr[SIZE_OF_ARRAY - i - 1];
        arr[SIZE_OF_ARRAY - i - 1] = temp;
        i--;
    }
    for(i=0; i<SIZE_OF_ARRAY; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}