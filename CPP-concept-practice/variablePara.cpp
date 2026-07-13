#include <initializer_list>
#include <iostream>
using namespace std;

void print(initializer_list<int> nums)
{
    for (int x : nums)
        cout << x << " ";
}
int main()
{
    print({1});
    cout<<endl;

    print({1, 2});
    
    cout<<endl;
    
    print({1, 2, 3, 4, 5});
//Compiler secretly creates
//  10
//  20
//  30
//and stores them in a temporary read-only list.
//Then passes that list to the function.
//{}
//The braces tell the compiler
//"Create an initializer_list."
// list processing
//for(auto it=nums.begin();it!=nums.end();it++)
// {
//     cout<<*it;
// }

/*
Elements are always const

Suppose

void foo(initializer_list<int> nums)
{
    nums.begin()[0]=100;
}
You can read them.
You cannot modify them.
*/

/*
It can have normal parameters too

Example

void print(string name,
           initializer_list<int> marks)
{
    cout<<name<<endl;

    for(int x:marks)
        cout<<x<<" ";
}
        | `vector`                            | `initializer_list`                                 |
| ----------------------------------- | -------------------------------------------------- |
| Can add/remove elements             | Fixed size                                         |
| Mutable                             | Read-only (`const` elements)                       |
| Dynamic memory                      | Temporary object                                   |
| Passes around a resizable container | Best for a short list of values in a function call |

*/
    cout<<endl;
    return 0;
}