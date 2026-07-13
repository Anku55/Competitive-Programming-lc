#include<bits./stdc++.h>
using namespace std;
/*
void change(int *ftr){
    ftr=NULL;

    cout<<ftr<<endl;
}
/*
Question
void fun(int *p)
Is pointer passed by reference?
Answer
No.
Pointer is passed by value.
Only the address is copied.
Both pointers point to the same object.
*/
/*
int main(){
    int x=10;
    int *ptr=&x;
    change(ptr);
    cout<<ptr;
 return 0;

}

A reference is not a new object that stores a copy of the value.
It's an alias (another name) for an existing object. Thinking of it 
as "two names, one memory location" will help you understand references correctly throughout C++.

*/

int &r = x;
int *p = &x;
//Only works with non-const objects.
///2

// A const pointer/reference only reads the object.
// So it can bind to
// non-const object 
// const object 
// literal 
// temporary object 


| Return                             | Safe? | Why                             |
| ---------------------------------- | ----- | ------------------------------- |
| `return localVariable;`            | ✅     | Returns a copy                  |
| `return &localVariable;`           | ❌     | Pointer dangles                 |
| `return localReference;`           | ❌     | Reference dangles               |
| `return parameter;` (by reference) | ✅     | Parameter belongs to caller     |
| `return globalVariable;`           | ✅     | Global lives for entire program |
| `return staticVariable;`           | ✅     | Static lives until program ends |


/*
Rule 1

Suppose

int foo()
{
    int x = 10;
    return x;
}

Is this okay?

✅ Yes.

Why?

Because

return x;

returns a copy of x.

Execution:

foo()

↓

x = 10

↓

copy 10

↓

destroy x

↓

caller receives 10

The caller has its own copy.

Rule 2

Now suppose

int& foo()
{
    int x = 10;
    return x;
}

Execution:

foo()

↓

x = 10

↓

return reference to x

↓

function ends

↓

x is destroyed

Now the caller has

reference

↓

memory that no longer exists

This is called a

Dangling Reference

Very dangerous.

Memory Picture

Inside function

Stack

+------+
| x=10 |
+------+

Return

return x;

Reference points here

reference
    │
    ▼

+------+
| x=10 |
+------+

Function ends

Stack cleared

Now

reference
↓
garbage

Book's Example
const string&
manip()
{
    string ret;

    return ret;
}

Looks innocent.

Actually

Wrong

because

ret

is local.

It disappears after

manip()

ends.

Even this is wrong
const string&
manip()
{
    return "Empty";
}

Many students think

"But "Empty" is a literal."

Actually

return "Empty";

does not return a string literal.

The compiler creates

temporary string

because the return type is

const string&

Conceptually:

string temp = "Empty";

return temp;

temp is destroyed when the function ends.

Again,

Dangling reference
*/