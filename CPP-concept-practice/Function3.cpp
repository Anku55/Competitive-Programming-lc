/*
// #include <bits./stdc++.h>
// using namespace std;
// // Returning a reference
// int &getValue(int &x)
// {
//     return x;
// }

// int main()
// {
//     int a = 10;

//     getValue(a) = 50;

//     cout << a << endl;

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

char &get_val(string &str, int index)
{
    return str[index];
}

int main()
{
    string s = "hello";

    cout << s << endl;

    get_val(s, 1) = 'A';
    // why we can right it at left side
    // because the function returns char& ->refrence
    // A reference is just another name (alias) for an existing object.
    // So the compiler treats

    // get_val(s,1)
    // as if you had written
    // s[1]
    // if we remove the & than we right get_vsl(s,1)='A'
    // it will through a error

    cout << s << endl;

    /// ############################################################
    // vector<int> foo()
    // {
    //     return {1, 2, 3};
    // }
    // vector<int> temp{1, 2, 3};
    // return temp;
    // So{1, 2, 3} is used to construct the return object.
    return EXIT_FAILURE;
#include <cstdlib>

    return EXIT_SUCCESS;
}
*/

/*
//Pointer to an array
int (*p2)[10];
//without ()--array of pointers
+----------------------------+
|10 integers                 |
+----------------------------+

      ^
      |
      p2


#include <iostream>
using namespace std;

int arr[10]={1,2,3,4,5,6,7,8,9,10};

int (*func(int))[10]
{
    return &arr;
}

int main()
{
    int (*p)[10]=func(5);

    cout<<(*p)[0]<<endl;
    cout<<(*p)[9]<<endl;
}

*/
///Trailing Return Type
//C++11 introduced a much easier syntax.
int (*func(int))[10]; //iski jagah

auto func(int) -> int (*)[10];
/*
auto func(int)
↓
returns
↓
pointer to array of 10 ints
*/
#include <iostream>
using namespace std;

int arr[10]={1,2,3,4,5,6,7,8,9,10};

auto func(int) -> int (*)[10]
{
    return &arr;
}

int main()
{
    auto p=func(0);

    cout<<(*p)[3];
}
/*
| Declaration                     | Meaning                                                      |
| ------------------------------- | ------------------------------------------------------------ |
| `int arr[10]`                   | Array of 10 ints                                             |
| `int *p[10]`                    | Array of 10 pointers                                         |
| `int (*p)[10]`                  | Pointer to an array of 10 ints                               |
| `int (*func(int))[10]`          | Function taking `int`, returning pointer to array of 10 ints |
| `auto func(int) -> int (*)[10]` | Same declaration using trailing return type                  |

*/

/*
#include <iostream>
using namespace std;

int odd[]  = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) *arrPtr(int i)
{
    if(i % 2)
        return &odd;

    return &even;
}

int main()
{
    auto p = arrPtr(5);

    for(int i=0;i<5;i++)
        cout << (*p)[i] << " ";
}

*/

/*
int x = 10;
decltype(x) y = 20;//"Use the same type as x.

double pi = 3.14;
decltype(pi) x = 5.5;
Compiler changes it to
double x = 5.5;


int odd[5] = {1,3,5,7,9};
What is the type of -->>int[5]
not int* 

Therefore
decltype(odd)
means
int[5]
*/
/*
#include <iostream>
using namespace std;

int odd[]  = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) *arrPtr(int i)
{
    if(i % 2)
        return &odd;

    return &even;
}

int main()
{
    auto p = arrPtr(5);

    for(int i=0;i<5;i++)
        cout << (*p)[i] << " ";
}
        odd

+---+---+---+---+---+
|1  |3  |5  |7  |9  |
+---+---+---+---+---+

even

+---+---+---+---+---+
|0  |2  |4  |6  |8  |
+---+---+---+---+---+

Returning a Reference Instead
Current version:

decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;
}
    Reference version:

decltype(odd) &arrRef(int i)
{
    return (i % 2) ? odd : even;
}

| Pointer Return    | Reference Return  |
| ----------------- | ----------------- |
| `decltype(odd) *` | `decltype(odd) &` |
| `return &odd;`    | `return odd;`     |
| `return &even;`   | `return even;`    |

*/