 #include <iostream>
using namespace std;
 // STATIC VARIABLE FUNCTION 
/*void counter() {
    static int count = 0;  // 👈 Yeh sirf ek baar hi initialize hoga
    count++;
    cout << "Function called " << count << " times\n";
}

int main() {
    counter();  // Output: 1
    counter();  // Output: 2
    counter();  // Output: 3
    return 0;
}
*/

//STATIC VARIABLE IN CLASS 
#include <iostream>
using namespace std;

class Student {
public:
    static int count;  // 👈 Static variable declaration

    Student() {
        count++;  // Har baar object banega, count badhega
    }

    void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Static variable initialization (outside class)
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.showCount();  // Output: Total Students: 3
    s2.showCount();  // Output: Total Students: 3
    s3.showCount();  // Output: Total Students: 3

    return 0;
}

