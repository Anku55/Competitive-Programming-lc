// a lambda function is an anonymous, inline function
// introduced in C++11 that allows you to write short
// // snippets of logic directly at the place of use.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x = 10;
    int y = 20;

    auto f = [x, &y]()
    {
        cout << x << " " << y;
    };

    //Why Use auto?
    // Can we write:
    // Lambda add;
    // No.
    // Because the compiler creates a unique, unnamed class.
    // You cannot write its type.
    // So we write
    // auto add = [](int a, int b) {
    //     return a + b;
    // };
    // auto lets the compiler figure out the lambda's hidden type.

    return 0;
}

// | Syntax   | Meaning                        |
// | -------- | ------------------------------ |
// | `[]`     | Capture nothing                |
// | `[x]`    | Copy x                         |
// | `[&x]`   | Reference x                    |
// | `[=]`    | Copy everything used           |
// | `[&]`    | Reference everything used      |
// | `[=,&x]` | Copy all except x by reference |
