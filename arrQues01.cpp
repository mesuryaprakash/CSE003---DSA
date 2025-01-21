#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void zeroAtEnd(){
    int arr[] = {1,0,2,3,0,4,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int swapcount = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == 0){
            for(int j = i+1; j < n-swapcount; j++){
                swap(arr[j-1], arr[j]);
            }
            swapcount++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest, largest;
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            smallest = arr[i]
        }
    }
}