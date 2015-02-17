#include "player.hpp"

player::player(int x, int y, int i) : m_ship(x, y), m_gold(2000) {
    if(i==0) m_texture.loadFromFile("img/bat1.png") ;
    if(i==1) m_texture.loadFromFile("img/bat2.png") ;
    if(i==2) m_texture.loadFromFile("img/bat3.png") ;
    if(i==3) m_texture.loadFromFile("img/bat4.png") ;

    m_sprite.setTexture(m_texture) ;
    m_sprite.setPosition(x*20, y*20) ;
}

int player::move_ship(int x, int y){
    return m_ship.move(x, y) ;
}

int player::getSX() const{
    return m_ship.getX() ;
}

int player::getSY() const{
    return m_ship.getY() ;
}

sf::Sprite player::getSprite() const{
    return m_sprite ;
}
