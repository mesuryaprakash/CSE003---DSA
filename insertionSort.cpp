#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    
    int arr[] = {75, 74, 3, 2, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}