// static 4 jagah use hota hai
// ####################1. Static Local Variable

#include <iostream>
using namespace std;

/*

void fun() {
    static int x = 0;
    x++;
    cout << x << endl;
}

int main() {
    fun();
    fun();
    fun();
}

// Sirf ek baar create hota hai.
// Program end hone tak rehta hai.
// Value remember karta hai.
// Use cases:
// Call counter
// Unique ID generator
// Cache
// State maintain karna

*/

// ################### 2. Static Global Variable
// Ye sirf isi .cpp file ke andar accessible hota hai.
// Dusri file se access nahi kar sakte
/*
static int x = 10;
int main() {
    cout << x;
}
*/

// ###################Static Member Variable (Class)

// #include <iostream>
// using namespace std;

// class Student {
// public:
//     static int count;

//     Student() {
//         count++;
//     }
// };

// Definition of static member
// int Student::count = 0;
// Har object ke paas alag copy nahi hoti.
// Sab objects ek hi variable share karte hain.
/*

##### Memory structure ######
Student
------------
count = 3
------------

s1 ----\
s2 ----- > count
s3 ----/


Use cases

Number of objects
Shared configuration
Common data
*/

// int main() {

//     Student s1;
//     Student s2;
//     Student s3;

//     cout << Student::count << endl;
// }
/**/

/*

//////////////////////Static Member Function

class Student
{
public:
    static void hello()
    {
        cout << "Hello";
    }
};

int main()
{
    Student::hello();
    // Object ke bina call ho sakta hai.
    
    instead of

Student s;
s.hello();
    
}

*/


// Static function ki limitation


// Ye non-static members ko access nahi kar sakta.
/*
class Test {
public:
    int x;

    static void fun() {
        cout << x;      // Error
    }
};
*/
/*
Ye dono concepts **`static` ke advanced use cases** hain. Ek-ek karke detail me samajhte hain.

---

# 1. Static Constant

### Code

```cpp
class Math {
public:
    static const double PI;
};

const double Math::PI = 3.14159;
```

## Step 1: Class ke andar

```cpp
class Math {
public:
    static const double PI;
};
```

Yahan sirf **declaration** hui hai.

Compiler ko bas bataya:

> "Math class me ek static constant `PI` hai."

Abhi memory allocate nahi hui.

---

## Step 2: Class ke bahar

```cpp
const double Math::PI = 3.14159;
```

Yahan actual **definition** hoti hai.

Memory allocate hoti hai.

Value assign hoti hai.

---

## Access kaise karte hain?

```cpp
cout << Math::PI;
```

Output

```
3.14159
```

Object banane ki zarurat nahi.

```cpp
Math m;

cout << m.PI;          // Works
cout << Math::PI;      // Better
```

---

## Memory

Suppose

```cpp
Math m1;
Math m2;
Math m3;
```

Memory

```
           Math Class
      -------------------
      PI = 3.14159
      -------------------

m1 ----\
m2 ----- > same PI
m3 ----/
```

Ek hi PI hai.

Sab share karte hain.

---

## Static kyu?

PI har object ke liye same hai.

Galat way

```cpp
class Math {
public:
    double PI = 3.14159;
};
```

Ab

```
m1.PI
m2.PI
m3.PI
```

Teen alag copies.

Waste of memory.

---

## Const kyu?

PI kabhi change nahi hota.

Compiler allow nahi karega

```cpp
Math::PI = 4;
```

Error

```
assignment of read-only variable
```

---

# Real Life Example

School

```
Student
--------
Name
Roll
Branch
```

Lekin

```
College Name = LTSU
```

Har student ka same.

Isliye

```
static const string collegeName;
```

perfect hai.

---

# 2. Static Objects

Ab ye interesting hai.

Example

```cpp
#include <iostream>
using namespace std;

void fun() {
    static string s = "Hello";

    cout << &s << endl;
}

int main() {
    fun();
    fun();
    fun();
}
```

---

## Pehli Call

```
fun()

s = "Hello"
```

Object create hua.

Memory

```
Static Memory

s = "Hello"
```

Address

```
0x61ff00
```

---

## Dusri Call

Compiler dekhta hai

```
s already exists
```

Naya object nahi banata.

Same object use hota hai.

Address

```
0x61ff00
```

---

## Teesri Call

Again

```
same object
```

Address

```
0x61ff00
```

---

Output

```
0x61ff00
0x61ff00
0x61ff00
```

Har baar same address.

---

# Agar static hata dein

```cpp
void fun() {
    string s = "Hello";

    cout << &s << endl;
}
```

Har call

```
Create object

Destroy object
```

Har baar naya object.

---

## Example with Constructor

```cpp
#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor\n";
    }

    ~Test() {
        cout << "Destructor\n";
    }
};

void fun() {
    static Test obj;
}

int main() {
    fun();
    fun();
    fun();
}
```

Output

```
Constructor
Destructor
```

### Constructor

Sirf **ek baar**.

### Destructor

Program end hone par **ek baar**.

---

## Agar static na ho

```cpp
void fun() {
    Test obj;
}
```

Output

```
Constructor
Destructor
Constructor
Destructor
Constructor
Destructor
```

Har function call me object banta aur destroy hota hai.

---

# Static Object ka use

### Example 1: Logger

```cpp
void log() {
    static ofstream file("log.txt");

    file << "New Log\n";
}
```

Agar `static` na ho, to har call me file open aur close hogi.

`static` se file ek baar khulti hai aur reuse hoti hai.

---

### Example 2: Database Connection

```cpp
void query() {
    static Database db;
}
```

Connection ek baar banega.

Har query me wahi connection use hoga.

---

### Example 3: Cache

```cpp
void solve() {
    static unordered_map<int,int> cache;
}
```

Previous results function calls ke beech preserve rehte hain.

---

# Summary

| Feature          | Static Constant | Static Object  |
| ---------------- | --------------- | -------------- |
| Number of copies | 1               | 1              |
| Lifetime         | Entire program  | Entire program |
| Shared           | Yes             | Yes            |
| Initialization   | Once            | Once           |
| Destroyed        | Program end     | Program end    |

---



*/