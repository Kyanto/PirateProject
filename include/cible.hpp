#ifndef CIBLE_HPP
#define CIBLE_HPP

#include "sidebar.hpp"
#include <SFML/Graphics.hpp>

class cible{
    public :
        cible(sidebar* Sidebar) ;
        void change(int type, int x, int y) ;
        int getX() const ;
        int getY() const ;
        sf::Sprite getSprite() const ;

    private :
        int m_type ;
        int m_x ;
        int m_y ;
        sidebar* m_sidebar ;
        sf::Texture m_t_select ;
        sf::Sprite m_s_select ;
};

#endif // CIBLE_HPP
