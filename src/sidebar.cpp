#include "sidebar.hpp"

sidebar::sidebar(){
    m_t_main.loadFromFile("assets/img/sidebar.png") ;
    m_s_main.setTexture(m_t_main) ;
    m_s_main.setPosition(640,0) ;
    m_t_player.loadFromFile("assets/img/bat1.png") ;
    m_s_player.setTexture(m_t_player) ;
    m_s_player.setPosition(780,147) ;
    m_t_case.loadFromFile("assets/img/mer.png") ;
    m_s_case.setTexture(m_t_case) ;
    m_s_case.setPosition(640,276) ;
}

void sidebar::changeShip(int i){
    if(i==0) m_t_player.loadFromFile("assets/img/bat1.png") ;
    if(i==1) m_t_player.loadFromFile("assets/img/bat2.png") ;
    if(i==2) m_t_player.loadFromFile("assets/img/bat3.png") ;
    if(i==3) m_t_player.loadFromFile("assets/img/bat4.png") ;
}

sf::Sprite sidebar::getSprite(char C) const{
    if(C == 'M') return m_s_main ;
    if(C == 'P') return m_s_player ;
    if(C == 'C') return m_s_case ;
}

void sidebar::changeCase(int type){
    if(type==0) m_t_case.loadFromFile("assets/img/mer.png") ;
    if(type==1) m_t_case.loadFromFile("assets/img/villeP.png") ;
    if(type==2) m_t_case.loadFromFile("assets/img/villeM.png") ;
    if(type==3) m_t_case.loadFromFile("assets/img/villeG.png") ;
    if(type==4) m_t_case.loadFromFile("assets/img/tourb.png") ;
    if(type==5) m_t_case.loadFromFile("assets/img/ile.png") ;
    if(type==6) m_t_case.loadFromFile("assets/img/epic.png") ;
}
