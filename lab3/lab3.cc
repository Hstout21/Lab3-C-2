#include <iostream>

void pretty();

using namespace std;

int main () {
    //########### Part 1 ############
    for(size_t i = 0; i < 6; ++i){
        pretty();
    }

    return 0;
}


void pretty(){
    static int x = 0;
    x++;
    for(int i = 0; i < x; ++i){
        cout << "*";
    }
    cout << endl;
}
