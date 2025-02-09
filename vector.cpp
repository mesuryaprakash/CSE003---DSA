#include<bits/stdc++.h>
using namespace std;

int main(){
    //Declaration and Intialization of vectors
    vector<int> v, v1;

    //Adding elements in vector
    v.push_back(1);
    v.push_back(2);

    //Declaraing iterator
    vector<int>::iterator it = v.begin();

    //Inserting at begin
    v.insert(v.begin(),5);

    cout << v.back() << endl;

    v1 = {20,30,40};

    //Adding v1 in v
    v.insert(v.end(), v1.begin(), v1.end()-1);
    cout << v1.back() << endl;

    cout << v.back() << endl;

    it = v.begin();

    //Printing value by address
    cout << *(it) << endl;

    //Value by address approach
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++){
        cout << *(i) << " ";
    }

    //Deleting from vector
    v.erase(v.begin() + 1);
    // v.erase(v.begin()+1, v.begin()+3);

    cout << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

}