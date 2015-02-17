#ifndef SHIP_HPP
#define SHIP_HPP

#include <math.h>

class ship{
    public :
        ship(int x, int y) ;
        int move(int x, int y) ;
        int getX() const ;
        int getY() const ;

    private :
        int m_x ;
        int m_y ;
        int m_lvl ;
};

#endif // SHIP_HPP
