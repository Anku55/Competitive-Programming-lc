#include <iostream>
using namespace std;

// size_t count_calls()
// {
//     static size_t ctr = 0; // value will persist across calls
//     return ++ctr;
// }
// int main()
// {
//     for (size_t i = 0; i != 10; ++i)
//         cout << count_calls() << endl;
//     return 0;
// }

int getNextID()
{
    static int id = 0;
    return ++id;
}

void fun()
{
    static int x = 0;

    // static changes the lifetime not the
    // scope x will remain accessible int the function
    // Counting function calls (like this example)
    //   Caching expensive computations
    // Generating unique IDs
    // Maintaining state between function calls without using global variables
    // Singleton-style helper objects (with care)
    x++;
    cout << x << endl;
}

int main()
{

    fun();
    fun();
    fun();

    cout << getNextID() << endl; // 1
    cout << getNextID() << endl; // 2
    cout << getNextID() << endl; // 3

    return 0;
}

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