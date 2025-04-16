#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent class show()\n";  // Ye chalega agar derived class override na kare
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child class show()\n";  // Ye chalega agar override kare
    }
};

int main() {
    Parent* p;
    Child c;

    p = &c;
    p->show();  // ✅ Output: Child class show()

    return 0;
}
 