#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Queue{
    public:
    int * arr;
    int front;
    int rare;
    int size;

    Queue(){
        arr = new int[size];
        front = -1;
        rare = -1;
    }

    void push(int val){
        if(rare == size-1){
            cout << "Queue Overflow";
            return;
        }

        rare++;
        arr[rare] = val;
        if(front == -1) front++;
    }

    void pop(){
        if(front == -1){
            cout << "Empty Queue";
            return;
        }
        front++;
    }
};

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack<int> st;
    for(int i = 0; i < q.size(); i++){
        st.push(q.front());
        q.pop();
        cout << q.size() << endl;
    }
    // cout << q.front();
    cout << st.top();

    

}