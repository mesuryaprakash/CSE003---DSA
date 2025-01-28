#include<iostream>
using namespace std;

void reachDest(int s, int e){
    //base case - when to stop
    if(s == e){
        cout << "Destination reached";
        return;
    }
    //relation
    s++;
    reachDest(s,e);
}

int pow(int n, int p){
    //base case
    if(p == 0){
        return 1;
    }
    return n * pow(n, p-1);

}

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int climb(int n){
    if(n < 2) return 1;
    return climb(n-1) + climb(n-2);

}

bool isSorted(int arr[], int n){
    if(n <= 1) return true;
    if(arr[0] > arr[1]) return false;
    else return isSorted(arr+1, n-1);
}

int arraySum(int arr[], int n){
    if(n == 1) return arr[n-1];
    return arr[0] + arraySum(arr+1, n-1);
}

int len(char arr[]){
    if( arr[0] == '\0') return 0;
    return (1 + len(arr+1))/2;
}

int getLength(string s){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        cout << s[i] << " ";
        count++;
    }
    return count/2;
}

bool palindrome(string s){

    return false;
}

int main(){
    string s = "hello";
    cout << getLength(s);
}