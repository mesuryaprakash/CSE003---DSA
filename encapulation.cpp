#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int rollNumber;
    float marks;

public:
    void Setters(string name, int rollNumber, float marks){
        this -> name = name;
        this -> rollNumber = rollNumber;
        this -> marks = marks;
    }
    float Getters(){
        return marks;
    }

};

int main(){
    Student stud;

    string name;
    int rollNumber;
    float marks;
    cout << "Enter name: ";
    cin >> name;
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Marks: ";
    cin >> marks;
    int flag = 1;
    do{
        if(marks < 0 || marks > 100){
            cout << "Enter correct marks: ";
            cin >> marks;
            flag = 0;
        }
        else{
            flag = 1;
        }
    } while(flag == 0);

    stud.Setters(name, rollNumber, marks);
    float res = stud.Getters();
    if(res >= 90){
        cout << "A";
    } else if(res >= 75 && res < 90){
        cout << "B";
    } else if(res >= 60 && res < 75){
        cout << "C";
    } else if(res >= 40 && res < 60){
        cout << "D";
    } else {
        cout << "F";
    }

    return 0;
}