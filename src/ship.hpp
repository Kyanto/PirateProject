#ifndef SHIP_HPP
#define SHIP_HPP

#include <math.h>
#include "canon.hpp"
#include "voile.hpp"

class ship{
    public :
        ship(int x, int y) ;
        bool move(int x, int y) ;
        int getX() const ;
        int getY() const ;

    private :
        int m_x ;
        int m_y ;
        int m_lvl ;
        int m_gold ;
        int m_att ;
        int m_speed ;
        int m_hp ;
        int m_relique ;
        //canon* m_canons ;
        //voile* m_voiles ;
};

#endif // SHIP_HPP
