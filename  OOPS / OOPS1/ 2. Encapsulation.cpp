 #include<iostream>
 #include<string>
 using namespace std;
 
 //ENCAPSULATION : 
 /*Data ko chhupa ke rakhna aur usko access karne ke liye sirf method (function) ka use karna.*/
 class BankAccount {
private:
    int balance;  // 👈 yeh private hai, direct access allowed nahi

public:
    BankAccount(int initialBalance) {
        balance = initialBalance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ₹" << amount << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ₹" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);              // ✅ Allowed
    account.withdraw(200);             // ✅ Allowed
    cout << "Balance: ₹" << account.getBalance() << endl;

    // cout << account.balance;        // ❌ Error: ‘balance’ is private
    return 0;
}

