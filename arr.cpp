#include<iostream>
using namespace std;

void swap(int &a, int &b){//call by reference
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n ; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main(){
    int n, sortChoice; //variables declaration

    cout << "Enter the size of the array: "; 
    cin >> n; //Array size input

    int arr[n];//Array declaration

    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }//Elements input

    //Sorting selection
    cout << "Choose one sorting method: \n1. Selection Sort\n2. Bubble Sort\n3. Quick Sort\n4. Insertion Sort\n5. Merge Sort\nChoose: ";
    cin >> sortChoice;
    int flag = 1;
    do{
        if(sortChoice < 1 || sortChoice > 5){
            cout << "Please choose correct option: ";
            cin >> sortChoice;
            flag = 0;
        } else flag = 1;
    } while(flag == 0);

    switch(sortChoice){
        case 1:
            selectionSort(arr, n);
            break;
        case 2:
            bubbleSort(arr, n);
            break;
        case 4:
            insertionSort(arr, n);
            break;
    }

    //Traversal of array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}