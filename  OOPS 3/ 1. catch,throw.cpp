 #include <iostream> // Input/output ke liye
#include <cmath>    // sqrt() function ke liye
using namespace std;

// Function to find square root
double findSquareRoot(double number) {
    // Agar number negative hai, toh exception throw karo
    if (number < 0) {
        throw "Cannot find square root of a negative number!";
    }
    // Agar number positive ya zero hai, toh uska square root return karo
    return sqrt(number);
}

int main() {
    try {
        double num;

        // User se input lo
        cout << "Enter a number: ";
        cin >> num;

        // Square root function call karo
        double result = findSquareRoot(num);

        // Agar koi exception nahi aayi, toh result print karo
        cout << "Square root of " << num << " is: " << result << endl;

    } catch (const char* errMsg) {
        // Agar exception aayi hai, toh usse catch karo aur error message print karo
        cout << "Error: " << errMsg << endl;
    }

    return 0; // Program successful execution ke baad return karega
}
