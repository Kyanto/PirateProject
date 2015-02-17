#include "ship.hpp"

ship::ship(int x, int y) : m_x(x), m_y(y), m_lvl(1), m_gold(2000), m_att(1), m_speed(5), m_hp(10), m_relique(0) {}

bool ship::move(int x, int y){
    if(x>=0 && x<32 && y>=0 && y<32){
        int distance = fabs(x-m_x) + fabs(y-m_y) ;
        if(distance <= 3){
            m_x = x ;
            m_y = y ;
            return false ;
        }
    }
    return true ;
}

int ship::getX() const{
    return m_x ;
}

int ship::getY() const{
    return m_y ;
}
