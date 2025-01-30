#include<iostream>
// #include<stack>
using namespace std;

class MyStack{
    int* arr;
    int top;
    int size;

    MyStack(){
        arr = new int[size];
        top = -1;
    }
    void push(int val){
    
        if(top == size -1){
            cout << "Stack overflow" << endl;
            return;
        }
        
        top++;

        arr[top] = val;
    }

    void pop(int val){
        if(isEmpty() == 1) return;

        top--;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int peek(){
        return arr[top];
    }
}


//pop
//isEmpty
//peek

int main(){
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    

    
}