#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int m, int e){
    int n1 = m - s + 1;
    int n2 = e - m;// e - s + 1

    int larr[n1], rarr[n2];
    for(int i = 0; i < n1; i++){
        larr[i]  = arr[s + i];
    }
    for(int i = 0; i< n2; i++){
        rarr[i] = arr[m + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while(i < n1 && j < n2){
        if(larr[i] < rarr[j]){
            arr[k] = larr[i];
            i++;
            k++;
        }
        else {
            arr[k] = rarr[j];
            k++;
            j++;
        }
    }
    while( i < n1 ){
        arr[k] = larr[i];
        k++;
        i++;
    }
    while(j < n2){
        arr[k] = rarr[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int s, int e){
    if(s < e){
        int m = (s + e)/2;
        mergeSort(arr, s, m);
        mergeSort(arr, m + 1, e);
        merge(arr, s, m, e);
    }
}
int main(){
    int arr[] = {26, 25, 1, 3, 2, 4};

    mergeSort(arr,0,5);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

}