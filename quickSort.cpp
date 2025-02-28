#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int st, int e){
    int pivot = arr[e];
    int i = -1;
    int j = 0;
    for(j; j < e; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[e],arr[i]);
    return i;
}

void quickSort(int arr[], int st, int e){
    if(st < e){
        int pi = partition(arr, st, e);

        quickSort(arr, st, pi-1);
        quickSort(arr, pi + 1, e);
    }

}

int main(){
    int arr[] = {26, 25, 1, 2, 4, 3};
    quickSort(arr, 0, 5);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

}