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

