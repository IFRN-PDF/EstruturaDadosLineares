//g++ main.cpp IntCell.cpp -o  intcell
#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <vector> 
#include "Rectangle.h"

using namespace std;

const Rectangle & findMax( const vector<Rectangle> & arr ) {
    int maxIndex = 0;

    for ( int i = 1; i < arr.size(); i++ )
        if ( arr[ maxIndex ] < arr[ i ] )
            maxIndex = i;

    return arr[ maxIndex ];
}

ostream & operator<< ( ostream & out, const Rectangle & rhs )
{
    rhs.print( out );
    return out; 
}

int main(){
    /* initialize random seed: */
    srand (time(NULL));   
    vector<Rectangle> arr;

    cout << "Test Random dimensions" << endl;
    for(int i = 0; i < 10;i++){
        int l = rand() % 100 + 1;
        int w = rand() % 100 + 1;
        cout << "Rectangle( " << l << "," << w << " ) inserted." << endl;
        arr.push_back(Rectangle(l,w)); 
    }    
    cout << "Max Rectangle is " << findMax(arr) << endl;

    arr.clear();

    cout << "Test same area:" << endl;
    arr.push_back(Rectangle(10,10)); 
    arr.push_back(Rectangle(50,2)); 
    
    cout << "Max Rectangle is " << findMax(arr) << endl;

    arr.clear();

    cout << "Test diferent area:" << endl;
    arr.push_back(Rectangle(10,10)); 
    arr.push_back(Rectangle(5,2)); 

    cout << "Max Rectangle is " << findMax(arr) << endl;
    
    return 0;
}