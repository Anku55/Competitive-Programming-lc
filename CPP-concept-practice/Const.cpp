//This cannot be modified
/*
1. const variable
2. const pointer
3. pointer to const
4. const reference
5. const function parameter
6. const member function (OOP)
*/

#include<bits./stdc++.h>
using namespace std;
int main(){
    /*
    const double PI = 3.14159;
    // this should not be changed so use const
    const int x=10;
   // x=20; not possible
    cout<<x<<endl;

    */

    

/*
    // pointer to const
    // learn use case for gpt
    // const int *p;
    //int const *p; both are identical
    int y = 10;

    const int *p = &y;
    //"I promise not to modify the object through this pointer."
    //*p = 20;//Error value is constant
    //p* is considered read-only.
    int z = 30;
    p = &z;// pointer can move
    cout<<*p<<endl;
    cout<<y<<endl;
    y=189;
    cout<<y<<endl;

        
    // const int *p
    // Pointer can move.
    // Object cannot change. 
*/


    



//    // 3. Const Pointer
//    int *const p = &x;

int x = 10;
int *const p = &x;
 //p = &y; pointer is fixed
 *p = 20;//////// Alowed
//  int *const p
//  Pointer fixed.
//  Object change allowed.


///4. Const Pointer to Const Object

// const int *const p = &x;
// *p = 20;//node allowed

//  p = &y;//not allowed


//5. Const Reference

int x = 10;
const int &r = x;
//Reference is read-only.
//r=90// noo
/*
Why use const reference?

Suppose

void print(const string &s)
{
    cout << s;
}

Advantages
No copy
Cannot modify string
Fast + Safe
*/
    
// 6. Const Function Parameter

// Example

// void fun(const int x)
// {
//     x++; // no
// }

//Top-Level vs Low-Level Const


// Top-Level Const
// Const applies to variable itself.
const int x = 10;
int *const p;
//Pointer fixed.
// Top-level const is ignored during copying.
// const int x = 10;
// int y = x;//Works.


// Low-Level Const
// Const applies to object.

const int *p;
//p ---->const int
const string &s;
//s--->const string
//String cannot change.

// Function Overloading
// These are same
// void fun(int x);
// void fun(const int x);
// Compiler sees
// fun(int)//Error.

// void fun(int &x);
// void fun(const int &x);
// Different functions.
// Allowed.

/*
Const Member Function (Classes)
class Student
{
public:

    void print() const
    {
        cout << age;
    }

private:
    int age;
};
Means
print()
↓
Cannot modify object.
Very important in OOP.
You'll study this later.
*/

/*
| Declaration             | Meaning                               |
| ----------------------- | ------------------------------------- |
| `const int x`           | Value cannot change                   |
| `const int *p`          | Cannot modify object through pointer  |
| `int *const p`          | Pointer cannot point elsewhere        |
| `const int *const p`    | Neither pointer nor object can change |
| `const int &r`          | Read-only reference                   |
| `const string &s`       | Read-only reference, no copy          |
| `void fun(const int x)` | Local copy cannot change              |

*/

/*
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    // -----------------------------
    // Top-Level const
    // -----------------------------
    int *const p = &x;

    *p = 100;      //  Allowed (object can change)
    // p = &y;     //  Error (pointer cannot change)

    cout << "x = " << x << endl;

    // -----------------------------
    // Low-Level const
    // -----------------------------
    const int *q = &x;

    // *q = 200;   //  Error (object cannot change through q)
    q = &y;        //  Allowed (pointer can move)

    cout << "*q = " << *q << endl;
}
*/




    
    return 0;
}