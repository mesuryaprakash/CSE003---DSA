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

void swap(int &a, int&b){
    int temp = a;
    a = b;
    b = temp;
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

int sumNatural(int n){
    if(n == 1){
        return 1;
    }

    return n + sumNatural(n-1);
}

void reverseArray(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverseArray(arr, l+1, r-1);
}

bool palindrome(int arr[], int l, int r){

    if(l >=r ) return true; 
    if(arr[l] != arr[r]){
        return false;
    }
    return palindrome(arr, l+r, r-1);
}

int binarySearchh(int arr[],int target,int  st,int e){
    if(st > e) return -1;
    int m = (st + e)/2;

    if(arr[m] == target) return m;
    else if(arr[m] < target){
        return binarySearchh(arr, target, m+1, e);
    }
    return binarySearchh(arr, target, st, m -1);
}

bool binarySearch(int arr[], int target){
    int st = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int e = n-1;
    if(binarySearchh(arr, target, st, e) == -1){
        return false;
    } else return true;
}

int power(int n, int p){
    if(p == 1){
        return n;
    } 
    if(p % 2 == 0){
        return power(n * n, p/2);
    } else{
        return power(n * n, p/2) * n;
    }
}

void subsequence(string s, int i, string curr){

    if(i == s.length()){
        cout <<  "| " << curr << " |" << " ";
        return;
    }

    subsequence(s, i + 1, curr + s[i]);
    subsequence(s, i +  1, curr);

}


int main(){
    int arr[] = {1,2,3,4,5};
    reverseArray(arr, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int pali[] = {1,2,3,2,1};
    cout << palindrome(arr, 0, 4) << endl;
    cout << palindrome(pali, 0, 4) << endl;
    int num = 'A';
    cout << num << endl;

    cout << binarySearch(arr, 3) << endl;
    cout << power(2, 4) << endl;
    subsequence("abcd", 0, "");
}