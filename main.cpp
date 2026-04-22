#include <iostream>
#include <string>
#include <vector>

using namespace std;

void displayHeader() {
    cout << "=== SECURITY AUDIT TOOL v1.0 ===" << endl;
    cout << "Status: Active Monitoring..." << endl;
    cout << "--------------------------------" << endl;
}

bool isSecure(string pwd) {
    bool hasNum = false;
    bool isLongEnough = (pwd.length() >= 8);
    
    for(char c : pwd) {
        if(isdigit(c)) hasNum = true;
    }
    
    return hasNum && isLongEnough;
}

string encryptData(string data) {
    // Caesar Cipher sederhana: geser 3 karakter
    for(int i = 0; i < data.length(); i++) {
        data[i] = data[i] + 3;
    }
    return data;
}

void logAction(string action) {
    cout << "[LOG]: " << action << " has been executed." << endl;
}

int main() {
    displayHeader();
    string password = "Abcde!2345";
    string cipherText = encryptData(password);
    
    cout << "Encrypted password is " << cipherText << endl;
    
    if (isSecure(password)) {
        cout << "Password is secure!" << endl;
    } else {
        cout << "Password is not secure!" << endl;
    }
}
