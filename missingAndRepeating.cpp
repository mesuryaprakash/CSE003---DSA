#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,2,4};
    int arrSize = arr.size();
    // vector<int> freq(arrSize+1, 0);

    // for(int i = 0; i < arrSize; i++){
    //     freq[arr[i]]++;
    // }

    // for(int i = 1; i <= arrSize ; i++){
    //     if(freq[i] == 0){
    //         cout << i << " ";
    //     }
    //     if(freq[i] > 1){
    //         cout << i << " ";
    //     }
    // }
    int s1, s2 = 0, s3, s4 = 0;
    s1 = (arrSize * (arrSize+1))/2;//natural number sum
    s3 = (arrSize * (arrSize + 1) * (2 * arrSize + 1))/6;//sum of square
    for(int i = 0; i < arrSize; i++){
        s2 += arr[i];//sum of numbers
        s4 += arr[i] * arr[i];//sum of square of numbers
    }

    int diff1 = s1 - s2;//(m-r)
    int diff2 = s3 - s4;//(m-r)(m+r)

    int mr = diff2/diff1;//(m+r)

    int m2 = mr + diff1;//2m

    cout << m2/2 << " ";//missing
    cout << -(diff1 - m2/2) << " ";//repeat


}