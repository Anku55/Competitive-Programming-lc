// #include <iostream>
// using namespace std;

// int main(int argc, char *argv[])
// {
//     cout << argc << endl;

//     for(int i=0;i<argc;i++)
//         cout << argv[i] << endl;
// }
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] = " << argv[i] << '\n';
    }

    cout << "\nAddresses:\n";

    for (int i = 0; i < argc; i++)
    {
        cout << (void*)argv[i] << '\n';
    }
}