#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    // Data Hiding
    double balance;
    string password;

public:
    string accountId;
    string username;

    Account(string id, string user, string pwd, double bal) {
        accountId = id;
        username = user;
        password = pwd;
        balance = bal;
    }

    // Setters
    void setPassword(string newPwd) {
        password = newPwd;
    }

    // Getters
    double getBalance() {
        return balance;
    }
    
    void getInfo() {
        cout << "User: " << username << ", ID: " << accountId << ", Balance: " << balance << endl;
    }
};

int main() {
    Account acc1("12345", "John Doe", "secret123", 1500.50);
    
    // cout << acc1.balance << endl; // Error: private member
    
    acc1.getInfo();
    cout << "Current Balance: " << acc1.getBalance() << endl;

    return 0;
}
