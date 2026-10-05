#include <iostream>
using namespace std;

int main () {
    int a, b;
    char op;
    cin >> a >> b >> op;
    if (op == '+') {
        cout << a + b;
    }
    else if (op == '-') {
        cout << a - b;
    }
    else if (op == '*') {
        cout << a * b;
    }
    else if (op == '/') {
        if (b !=0) {
            cout << a / b;
        }
        else {
            cout << "Error: Division by zero";
        }
    }
}