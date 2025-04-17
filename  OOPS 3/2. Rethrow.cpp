 #include <iostream>
using namespace std;

void innerFunction() {
    try {
        // Yahan error throw ho rahi hai
        throw "Inner error!";
    } catch (const char* msg) {
        cout << "⚠️ Inner caught: " << msg << endl;

        // Ab main dobara exception throw kar raha hoon
        throw;
    }
}

int main() {
    try {
        innerFunction();  // Call kar rahe hain inner function
    } catch (const char* msg) {
        cout << "🛑 Main caught: " << msg << endl;
    }

    return 0;
}


/*
📌 Kya hua yahaan?
innerFunction() mein ek error throw hui.
Usne khud catch kiya, aur bola: "haan bhai mujhe error mili".
Fir usne dobara throw; bola — ye rethrowing hui.
Ye rethrown exception main() function ke catch block mein chali gayi.
main() ne bola: "haan bhai, mujhe bhi error mili".
*/