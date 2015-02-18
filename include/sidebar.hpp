#ifndef SIDEBAR_HPP
#define SIDEBAR_HPP

#include <SFML/Graphics.hpp>

class sidebar{
    public :
        sidebar() ;
        void changeShip(int i) ;
        void changeCase(int type) ;
        sf::Sprite getSprite(char C) const ;

    private :
        sf::Texture m_t_main ;
        sf::Sprite m_s_main ;
        sf::Texture m_t_player ;
        sf::Sprite m_s_player ;
        sf::Texture m_t_case ;
        sf::Sprite m_s_case ;
};

#endif // SIDEBAR_HPP
