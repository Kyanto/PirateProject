#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "ship.hpp"

class player{
    public :
        player(int x, int y) ;
        int move_ship(int x, int y) ;
        int getSX() const ;
        int getSY() const ;

    private :
        ship m_ship ;
        int m_gold ;
};

#endif // PLAYER_HPP
