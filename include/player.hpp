#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

#include "ship.hpp"

class player{
    public :
        player(int x, int y, int i) ;
        int move_ship(int x, int y) ;
        int getSX() const ;
        int getSY() const ;
        sf::Sprite getSprite() const ;

    private :
        ship m_ship ;
        int m_gold ;
        sf::Texture m_texture ;
        sf::Sprite m_sprite ;
};

#endif // PLAYER_HPP
