#ifndef INTCELL_H
#define INTCELL_H

class IntCell {
 public:
      explicit IntCell( int initialValue = 0 );

      IntCell( const IntCell & rhs );
      ~IntCell( );
      const IntCell & operator=( const IntCell & rhs );

      int read( ) const;
      void write( int x );
  private:
      int *storedValue;
};

#endif