#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7,9,11};
    int arr2[] = {2,4,6,8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> res;

    int ptr1 = 0;
    int ptr2 = 0;
    int ptr3 = 0;//use for indexing for resultant array


    while(ptr1 < n1 && ptr2 < n2){
        if(arr1[ptr1] < arr2[ptr2]){
            res.push_back(arr1[ptr1]);
            ptr1++;
            ptr3++;
        } else{
            res.push_back(arr2[ptr2]);
            ptr2++;
            ptr3++;
        }
    }

    while(ptr1 < n1){
        res.push_back(arr1[ptr1]);
        ptr1++;
    }

    while(ptr2 < n2){
        res.push_back(arr2[ptr2]);
        ptr2++;
    }

    for(int i = 0; i < n1 + n2; i++){
        cout << res[i] << " ";
    }


}