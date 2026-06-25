// Due to the ability of a pointer to directly refer to the value
//  that it points to, a pointer has different properties when it 
// points to a char than when it points to an int or a float.
//  Once dereferenced, the type needs to be known. And for that, 
// the declaration of a pointer needs to include the data type
//  the pointer is going to point to.

// The declaration of pointers follows this syntax:

// type * name;

// #include <iostream>
// using namespace std;

// int main ()
// {
//   int firstvalue=5;
//   int secondvalue=6;
//   int * mypointer;

//   mypointer = &firstvalue;
//   *mypointer = 10;
// // "Go to the address stored inside the pointer and access the value there."
//   mypointer = &secondvalue;
//   *mypointer = 20;
//   cout << "firstvalue is " << firstvalue << '\n';
//   cout << "secondvalue is " << secondvalue << '\n';
//   return 0;
// }

// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20
  
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
/*
1. p = &x        → Store address of x in p.

2. *p            → Value stored at the address inside p.

3. p             → Address stored in pointer.

4. p = q         → Copies ADDRESS.

5. *p = *q       → Copies VALUE.

6. *p = value    → Changes the variable pointed to by p.

7. p = &variable → Changes where the pointer points.

8. p = q DOES NOT copy the actual variable.

9. Always read *p as:
   "Go to the address stored in p."

10. Declare multiple pointers as:
    int *p1, *p2;

    NOT

    int *p1, p2;
*/


///////////////// Array Pointerss/////////////////////////


// & is the address-of operator, and can be read simply as "address of"
// * is the dereference operator, and can be read as "value pointed to by"
// 1. Every variable is stored in memory.
// 2. Every memory location has a unique address.
// 3. Variable name is just an identifier.
// 4. Operating System decides memory addresses.
// 5. '&' returns the address of a variable.
// 6. Pointer stores an address, not the actual value.
// 7. Memory is organized byte by byte.
// 8. Large data types occupy multiple consecutive bytes.
// 9. Understanding memory addresses is the foundation of pointers.
// 10. Pointers are essential for data structures, networking, operating systems, databases, and projects like Redis and HTTP servers.