 #include <iostream>
#include <string>
using namespace std; // Corrected namespace spelling

// Abstract class
class Shape {
public:
    virtual void draw() = 0;  // Abstract function (pure virtual function)
};

// Derived class - Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Draw Circle\n";  // Corrected output for Circle
    }
};

// Derived class - Square
class Square : public Shape {
public:
    void draw() override {
        cout << "Draw Square\n";  // Corrected output for Square
    }
};

int main() {
    // Create objects of derived classes
    Circle cir1;
    cir1.draw();  // Output: Draw Circle

    Square squ1;
    squ1.draw();  // Output: Draw Square

    // Shape s1;  // ❌ Not allowed! Cannot instantiate an abstract class.
    // s1.draw(); // This would cause an error because Shape is abstract.

    return 0;
}
