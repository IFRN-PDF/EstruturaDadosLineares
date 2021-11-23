//g++ main.cpp IntCell.cpp -o  intcell
#include <iostream>
#include "IntCell.h"
using namespace std;

int main(){

    IntCell a( 2 );
    IntCell b = a;
    IntCell c;
    
    c = b;
    
    a.write( 4 );
    
    cout << a.read() << endl << b.read() << endl << c.read() << endl; 
    
    return 0;
}