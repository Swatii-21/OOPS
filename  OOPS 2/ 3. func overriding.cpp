#include<iostream>
#include<string>
using namespace std ; 

//function overridden 
class Parent{
    public: 
    void show(){
    cout << "parent class show .\n";
    }
};

class Child : public Parent{
    public:
    void show(){
        cout << "child class show .. \n";
    }
};

int main (){
    Child child1;
    child1.show();
    return 0 ; 
}
