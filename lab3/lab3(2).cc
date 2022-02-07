#include <iostream>

using namespace std;

int main () {
    //########### Part 2 ############
    int *ptr;
    int placeholder;
    ptr = &placeholder;

    cout << "New Integer:" << ptr << endl;
    cout << "Pointer:" << &ptr << endl;

    *ptr = 2401;
    
    //Loop 1.
    for (int i = 0; i < 10; i++)
    {
        ++(*ptr);
        cout << *ptr << " is stored at " << ptr <<endl;
    }
    cout << endl;
    //Loop 2.
    for (int i=0;i<10;i++)
    {
        ++(ptr);
        cout << *ptr << " is stored at " << ptr << endl;
    }
    return 0;
}

