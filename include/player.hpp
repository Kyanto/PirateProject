#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

#include "ship.hpp"
#include "cible.hpp"

class player{
    public :
        player(int x, int y, int i) ;
        void move_ship(cible cibled) ;
        int getSX() const ;
        int getSY() const ;
        sf::Sprite getSprite() const ;
        bool getMove() const ;
        void ucanmove() ;

    private :
        ship m_ship ;
        bool m_move ;
        sf::Texture m_texture ;
        sf::Sprite m_sprite ;
};

#endif // PLAYER_HPP
