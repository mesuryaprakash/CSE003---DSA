#include<bits/stdc++.h>
using namespace std;

int algo(int arr[], int n){
    
    int cand = INT_MIN;
    int count = 0;


    for(int i = 0; i < n; i++){
        if(count == 0){
            cand = arr[i];
        } else if(cand == arr[i]){
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++){
        if(cand = arr[i]){
            count++;
        }
    }

    if(count > n/2){
        return cand;
    }

    return -1;
}

int main(){
    int arr[] = {2,2,1,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << algo(arr, n) << endl;

}