#include<bits/stdc++.h>
using namespace std;
int main() { 
    int arr[] = {10, 20, 30, 40, 50};
    const int SIZE_OF_ARRAY = sizeof(arr)/sizeof(arr[0]);
    int temp, start=0, end=SIZE_OF_ARRAY - 1;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<SIZE_OF_ARRAY; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

