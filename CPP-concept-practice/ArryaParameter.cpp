#include<bits./stdc++.h>
using namespace std;
int main(){
    //If your function doesn't modify an object, pass it as const T&.
    //void func(const string &s);   // Good
    //Why? Because a non-const reference can bind only
    // to a non-const lvalue.

    //3. Temporary objects can bind to const references
    //Arrays cannot be passed by value
    //int arr[5] = {1, 2, 3, 4, 5};
    // internaly cpp converts into void print(int *arr);
    //Because arrays are not copyable.
    //int a[5] = {1,2,3,4,5};
    //int b[5] = a;//illegal
    //Since arrays can't be copied, passing them by value isn't possible.
    //Instead, the compiler passes the address of the first element.
    //When calling print(arr);
    //the compiler automatically converts it to
    //print(&arr[0]);
    //int *
    //pointing to the first element
// arr
//  │
//  ▼
// +----+----+----+----+----+
// |10  |20  |30  |40  |50  |
// +----+----+----+----+----+
//  ^
//  |
//  arr (pointer)
//These declarations are identical
//void print(const int *);
//void print(const int []);
//void print(const int[10]);//The [10] is ignored by the compiler.
//Although they look different, the compiler treats all three as
//void print(const int *);
//Why write int[] or int[10] then?

//It's mainly for documentation.

/*
The function cannot know the array size.

Suppose

void print(int *arr)
{
    cout << sizeof(arr);//8
}
    */ 
   /*
   #include <iostream>
using namespace std;

void foo(int (&arr)[10])
{
    cout << sizeof(arr);
}

int main()
{
    int arr[10];
    foo(arr);
}
    //"arr is a reference to an array of 10 integers.
    //Since it's a reference to the actual array, no array-to-pointer decay occurs.
   */

   /*
   #include <iostream>
using namespace std;

void foo(int *p)
{
    p[1] = 100;
}

int main()
{
    int arr[] = {1, 2, 3};

    foo(arr + 1);

    cout << arr[0] << " " << arr[1] << " " << arr[2];
}

//output // 1 2 100

   */
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};

    cout << arr[2] << " ";
    cout << 2[arr];
}// 30 30
arr[i] == *(arr + i)
But addition is commutative:
arr + i == i + arr
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};

    cout << *arr << " ";
    cout << *arr + 1 << " ";
    cout << *(arr + 1);
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15};

    int *p = arr;

    cout << (*p)++ << " ";
    cout << *p;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15};
    int *p = arr;

    cout << ++*p << " ";
    cout << *p;
}
*/

/*
| Expression | Equivalent | Output (arr = {5,10,15}) | Pointer after       |
| ---------- | ---------- | ------------------------ | ------------------- |
| `*p++`     | `*(p++)`   | `5`                      | points to `10`      |
| `(*p)++`   | value++    | `5`                      | still points to `6` |
| `++*p`     | `++(*p)`   | `6`                      | still points to `6` |
| `*++p`     | `*(++p)`   | `10`                     | points to `10`      |

*/
//###########################################Multidimensnol array ############################

/*
int matrix[3][4];
array of 3 elements        ↓
each element is an array of 4 ints

matrix

+---------------------+
| 0 1 2 3 |   row 0   |
+---------------------+
| 4 5 6 7 |   row 1   |
+---------------------+
| 8 9 A B |   row 2   |
+---------------------+
*/
/*
int matrix[3][4];
foo(matrix);
What is the first element?

The first element is

matrix[0] whose type is

int[4]
Read it as
pointer to an array of 4 integers.

// correct parameter void print(int (*matrix)[10])
if we write int *matrix[10];
[] has higher precedence.
 matrix[10] will read as array of pointer //int (*matrix)[10];
 /*
 Instead of
void print(int (*matrix)[10])
you can write
void print(int matrix[][10])
Compiler converts this into
int (*matrix)[10]
Exactly the same.

void print(int matrix[][]);
Compiler error.
Why?
Because it must know the size of every row.


*/
/*
#include <iostream>
using namespace std;

void print(int matrix[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    int mat[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };

    print(mat,2);
}
However, the compiler ignores the first dimension. It is treated exactly as:
void print(int matrix[][4]){}
*/

     return 0;
 }