#include "cible.hpp"

cible::cible(sidebar* Sidebar) : m_type(-1), m_x(-1), m_y(-1), m_sidebar(Sidebar) {
    m_t_select.loadFromFile("assets/img/select.png") ;
    m_s_select.setTexture(m_t_select) ;
    m_s_select.setPosition(-20,-20) ;
}

void cible::change(int type, int x, int y){
    m_type = type ;
    m_x = x ;
    m_y = y ;
    (*m_sidebar).changeCase(m_type) ;
    m_s_select.setPosition(x*20, y*20) ;
}

int cible::getX() const{
    return m_x ;
}

int cible::getY() const{
    return m_y ;
}

sf::Sprite cible::getSprite() const{
    return m_s_select ;
}
