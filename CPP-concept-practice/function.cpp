#include <iostream>
using namespace std;

// A function call does two things: It initializes the function’s parameters from the
// corresponding arguments, and it transfers control to that function.

// // 🔹 Function Declaration (Prototype)
// int add(int a, int b);
// void greet(string name);
// int factorial(int n);
// void swapByReference(int &x, int &y);

// int main() {
    
//     int sum = add(5, 3);
//     cout << "Sum: " << sum << endl;

//     // 🔹 Function Call (no return)
//     greet("Ankush");

//     // 🔹 Recursive Function
//     int fact = factorial(5);
//     cout << "Factorial of 5: " << fact << endl;

//     // 🔹 Pass by Reference
//     int a = 10, b = 20;
//     cout << "Before swap: a = " << a << ", b = " << b << endl;
    
//     swapByReference(a, b);
    
//     cout << "After swap: a = " << a << ", b = " << b << endl;

//     return 0;
// }

// // 🔷 Function Definitions

// // 1. Function with parameters and return value
// int add(int a, int b) {
//     return a + b;
// }

// // 2. Function with parameter, no return
// void greet(string name) {
//     cout << "Hello, " << name << "!" << endl;
// }

// // 3. Recursive function
// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }

// // 4. Pass by reference function
// void swapByReference(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }