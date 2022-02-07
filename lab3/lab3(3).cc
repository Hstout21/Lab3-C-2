#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    //########### Part 3 ############
    int capacity = 5;
    int used = 0;
    int* ptr;
    int* tmpptr;

    ptr = new int[capacity];
    for(size_t i=0; i<25; ++i){
        ptr[used] = rand();
        //cout << ptr[used] << endl;
        used++;

        if(used == capacity){
            //Question 29.
            tmpptr = new int[capacity + 5];
            for (int j = 0; j < used; ++j) {
                tmpptr[j] = ptr[j];
            }
            capacity += 5;
            delete []ptr;
            ptr = tmpptr;
            cout << "Resized" << endl;

            //Question 31.
            tmpptr[2] = 0;
            for (int j = 0; j < used; ++j) {
                cout << ptr[j] << endl;
            }
        }
    }

    return 0;
}

