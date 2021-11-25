#include "Rectangle.h"

void Rectangle::initialize( int length, int width) {
    dimension = new int[2];
    dimension[0] = length;
    dimension[1] = width;
}

Rectangle::Rectangle( const Rectangle & rhs ){
    initialize(rhs.dimension[0],rhs.dimension[1]);
}
    
Rectangle::Rectangle( int length, int width ){
    initialize(length,width);
}

Rectangle::~Rectangle( ) {
    if( dimension )
        delete[] dimension;
}

int Rectangle::getLenth( ) const {
    return dimension[0];
}

int Rectangle::getWidth( ) const {
    return dimension[1];
}

int Rectangle::getArea() const{ 
    return dimension[0] * dimension[1];
}

int Rectangle::getPerimeter() const{ 
    return 2*(dimension[0] + dimension[1]);
}

void Rectangle::write( int length, int width ) {
    dimension[0] = length;
    dimension[1] = width;
}

void Rectangle::print( std::ostream & out ) const{
     out << "(Rectangle " << dimension[0] << "," << dimension[1] << ")"; 
}

Rectangle & Rectangle::operator=( const Rectangle & rhs ) {
    if ( this != &rhs )
        dimension = rhs.dimension;
    
    return *this;    
}

bool Rectangle::operator<( const Rectangle & rhs ) const {
    if ( this == &rhs )
        return false;
    
    if(this->getArea() < rhs.getArea())
        return true;
    else if(this->getArea() > rhs.getArea())
        return false;

    if(this->getPerimeter() < rhs.getPerimeter())
        return true;
    else
        return false;
}