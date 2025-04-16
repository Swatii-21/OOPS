 #include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }
    ~Demo() {
        cout << "Destructor called\n";
    }

    void show() {
        cout << "Demo object running...\n";
    }
};

void createNormalObject() {
    Demo d1;  // ✅ Normal object
    d1.show();
}

void createStaticObject() {
    static Demo d2;  // ✅ Static object
    d2.show();
}

int main() {
    cout << "--- First Call ---\n";
    createNormalObject();
    createStaticObject();

    cout << "--- Second Call ---\n";
    createNormalObject();     // ❗ normal object again
    createStaticObject();     // ❗ static object same

    cout << "--- End of main() ---\n";
    return 0;
}
