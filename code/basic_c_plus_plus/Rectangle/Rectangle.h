#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle {
 public:

  Rectangle( int length = 10, int width = 5 );

  Rectangle( const Rectangle & rhs );

  ~Rectangle( );

  int getLenth( ) const;
  int getWidth( ) const;
  int getArea() const;
  int getPerimeter() const;

  void write( int, int );

  void print( std::ostream & out = std::cout ) const;

  Rectangle & operator=( const Rectangle & rhs );
  bool operator<( const Rectangle & rhs ) const;

  private:
    void initialize(int , int );
    int * dimension;
};

#endif