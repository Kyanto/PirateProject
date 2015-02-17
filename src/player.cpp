#include "player.hpp"


player::player(int x, int y) : m_ship(x, y), m_gold(2000) {}

int player::move_ship(int x, int y){
    return m_ship.move(x, y) ;
}

int player::getSX() const{
    return m_ship.getX() ;
}

int player::getSY() const{
    return m_ship.getY() ;
}

