#include<iostream>
#include<stack>
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
};

void reverseSentence(string s){
    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }

        st.push(word);
        
    }

    while( !st.empty() ){
        cout << st.top() << " ";
        st.pop();
    }

}

bool isValid(string s) {
    stack<char> st;

    bool ans = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] =='['){
            st.push(s[i]);
        } 
        else if(s[i] == ')'){
            if(st.top() == '(' && !st.empty()){
                st.pop();
            } else{
                ans = false;
                break;
            }
        } else if(s[i] == '}'){
            if(st.top() == '{' && !st.empty()){
                st.pop();
            } else{
                ans = false;
                break;
            }
        } else if(s[i] == ']'){
            if(st.top() == '[' && !st.empty()){
                st.pop();
            } else{
                ans = false;
                break;
            }
        }
    }
    return ans;
}




//pop
//isEmpty
//peek

int main(){
    string str = "[{[()]}]";
    cout << isValid(str);

    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    

    
}