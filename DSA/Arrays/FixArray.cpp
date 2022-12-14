#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {-1, 15, 6, 1, 9, 3, 2, -1, 4, -1};
    const int SIZE_OF_ARRAY = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for(int i=0; i<SIZE_OF_ARRAY; i++) {
        for(int j=0; j<SIZE_OF_ARRAY; j++) {
            if(arr[j] == i) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }        
    }
    for(int i=0; i<SIZE_OF_ARRAY; i++) {
        if(arr[i] != i) {
            arr[i] = -1;
        }
    }

    for(int i=0; i<SIZE_OF_ARRAY; i++) {
        cout << arr[i] << " ";
    }
}