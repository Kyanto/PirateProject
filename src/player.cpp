#include "player.hpp"

player::player(int x, int y, int i) : m_ship(x, y), m_move(true) {
    if(i==0) m_texture.loadFromFile("assets/img/bat1.png") ;
    if(i==1) m_texture.loadFromFile("assets/img/bat2.png") ;
    if(i==2) m_texture.loadFromFile("assets/img/bat3.png") ;
    if(i==3) m_texture.loadFromFile("assets/img/bat4.png") ;

    m_sprite.setTexture(m_texture) ;
    m_sprite.setPosition(x*20, y*20) ;
}

void player::move_ship(cible cibled){
    m_move = m_ship.move(cibled.getX(), cibled.getY()) ;
    //Si on a bougé, on actualise la position du sprite BATEAU
    if(!m_move) m_sprite.setPosition(m_ship.getX()*20, m_ship.getY()*20) ;
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

bool player::getMove() const{
    return m_move ;
}

void player::ucanmove(){
    m_move = true ;
}
