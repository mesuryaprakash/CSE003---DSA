#include<iostream>
using namespace std;


int main(){
    int num = 345;
    int count = 1;
    int sum = 0;
    while(num > 10 || num < -10){
        sum += num%10;
        num /= 10;
        count++;
    }
    cout << count << endl;
    sum += num;
    cout << sum << endl;
}