int add(int,int);
/*
| Command                        | Meaning           | Output    |
| ------------------------------ | ----------------- | --------- |
| `g++ main.cpp math.cpp -o app` | Compile + Link    | `app.exe` |
| `g++ -c main.cpp`              | Compile only      | `main.o`  |
| `g++ -c math.cpp`              | Compile only      | `math.o`  |
| `g++ main.o math.o -o app`     | Link object files | `app.exe` |

*/
/*
Correct command
Compile both source files.
g++ main.cpp math.cpp -o main
Then run
./main
or on Windows PowerShell
.\main
*/

/*
            math.h
               │
               │
        (copied by #include)
               │
      ┌────────┴────────┐
      │                 │
      ▼                 ▼
   main.cpp         test.cpp
      │                 │
      ▼                 ▼
    main.o           test.o
          \         /
           \       /
            \     /
             ▼   ▼
            Linker
               │
               ▼
         Final Executable


         Why are we even combining files?

Because a program doesn't run as separate .
cpp files. It runs as one executable (.exe).
The linker combines all compiled pieces into 
that one executable.

Separate compilation means each .cpp file is compiled independently,
and later all the compiled files are linked together to make one executable.
*/

/*
# 🚀 C++ Separate Compilation - Quick Revision Notes

## 1. What is Separate Compilation?

* Each **`.cpp` file** is compiled **independently**.
* Each compiled file becomes an **object file (`.o`)**.
* The **linker** combines all object files into one executable.

---

## 2. Project Structure

```text
Project
│
├── main.cpp      // Uses functions
├── math.cpp      // Function definitions
└── math.h        // Function declarations
```

### math.h

```cpp
int add(int, int);
```

### math.cpp

```cpp
#include "math.h"

int add(int a, int b)
{
    return a + b;
}
```

### main.cpp

```cpp
#include "math.h"

int main()
{
    add(5,3);
}
```

---

# 3. Build Process

```
main.cpp
        │
        ▼
     Compiler
        │
        ▼
      main.o

math.cpp
        │
        ▼
     Compiler
        │
        ▼
      math.o

main.o + math.o
        │
        ▼
      Linker
        │
        ▼
    Executable
```

---

# 4. Compiler vs Linker

### Compiler

* Compiles **one `.cpp` file at a time**
* Produces **`.o` (Object File)**

Example

```
main.cpp
↓

main.o
```

---

### Linker

* Combines all `.o` files
* Resolves function calls
* Produces executable

Example

```
main.o + math.o

↓

main.exe
```

---

# 5. Object File (.o)

Contains

* Machine code
* Information about functions it needs

Example

```
main.o

Needs add()

math.o

Provides add()
```

Linker connects them.

---

# 6. Compilation Commands

### Compile + Link

```bash
g++ main.cpp math.cpp -o main
```

Produces executable directly.

---

### Compile Only

```bash
g++ -c main.cpp
```

Produces

```
main.o
```

No executable.

---

### Link Object Files

```bash
g++ main.o math.o -o main
```

Produces executable.

---

# 7. Why use `-c`?

If only one file changes:

Yesterday

```
main.o
math.o
```

Today only

```
math.cpp
```

changed.

Just compile

```bash
g++ -c math.cpp
```

Then link

```bash
g++ main.o math.o -o main
```

No need to recompile `main.cpp`.

---

# 8. Why Separate Compilation?

 Faster builds

 Better organization

 Easy maintenance

 Team collaboration

---

# 9. Header Files

Contain only **declarations**

```cpp
int add(int, int);
```

Source files contain **definitions**

```cpp
int add(int a, int b)
{
    return a + b;
}
```

---

# 10. Golden Build Pipeline

```
.cpp
 │
 ▼
Compiler
 │
 ▼
.o
 │
 ▼
Linker
 │
 ▼
Executable
```

---

# Interview One-Liners

### What is Separate Compilation?

Compiling each `.cpp` file separately into an object file and then linking all object files to create one executable.

---

### What is an Object File?

A compiled `.cpp` file (`.o`) containing machine code and unresolved references.

---

### What does `-c` do?

Compile only.

Produces `.o` file.

Does not create an executable.

---

### Compiler vs Linker

| Compiler             | Linker             |
| -------------------- | ------------------ |
| `.cpp → .o`          | `.o → .exe`        |
| Compiles source code | Joins object files |
| One file at a time   | All files together |

---

## Memory Trick

* **`.h`** → Declaration (**What exists?**)
* **`.cpp`** → Definition (**How it works?**)
* **Compiler** → `.cpp → .o`
* **Linker** → `.o → .exe`
* **`#include`** → Copies the header into the source file.

*/