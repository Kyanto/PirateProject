#include "main.hpp"

player init(int i){

    int x, y ;

    //Les 4 points de spawn
    switch(i){
        case 0 :
            x = 0 ;
            y = 0 ;
            break ;
        case 1 :
            x = 31 ;
            y = 0 ;
            break ;
        case 2 :
            x = 0 ;
            y = 31 ;
            break ;
        case 3 :
            x = 31 ;
            y = 31 ;
            break ;
        default :
            break ;
    }

    player nouv(x,y,i) ;
    return nouv ;
}

int main(){

    //0mer 1Pville 2Mville 3Gville 4Siph 5Ile 6Epic 9Inconnu
    int map[32][32] = { {0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
                        {0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,0},
                        {0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,2,0,0,0,0,0,0,0,0,5,0,0,0,0},
                        {0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0},
                        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,5},
                        {0,0,0,0,5,0,0,0,0,0,0,4,4,4,0,6,0,0,0,4,4,4,0,0,0,0,0,0,1,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,0,0,0,4,4,4,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,2,2,0,0,5,0,0,0,0,0,0,0,0,4,4,4,0,0,0,0,0,0,0,0,0,0},
                        {0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0},
                        {0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,0,0,0,6,0,0,0,0,0,0,0,0,0,2,0},
                        {0,2,0,0,0,0,0,5,0,0,0,6,0,0,0,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0},
                        {0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0},
                        {0,0,0,0,0,0,5,0,0,0,4,4,4,0,0,0,0,0,0,0,0,5,0,0,2,2,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,4,4,4,0,0,0,0,0,4,4,4,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,1,0,0,0,0,0,0,4,4,4,0,0,0,6,0,4,4,4,0,0,0,0,0,0,5,0,0,0,0},
                        {5,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,4,4,4,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,1},
                        {0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,5,0,0},
                        {0,0,0,0,5,0,0,0,0,0,0,0,0,2,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0},
                        {0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0},
                        {0,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0},
                        {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0},
                    };
    bool play = false ;
    int actual=0 ;

    //Création de la fenetre de jeu, chargement de la carte
    sf::RenderWindow window(sf::VideoMode(960, 640), "The Pirate Project");

    //Affichage de l'accueil et de la sidebar
    sf::Texture t_content ;
    t_content.loadFromFile("img/menu.png") ;
    sf::Sprite s_content ;
    s_content.setTexture(t_content) ;

    sf::Texture t_sidebar ;
    t_sidebar.loadFromFile("img/sidebar.png") ;
    sf::Sprite s_sidebar ;
    s_sidebar.setTexture(t_sidebar) ;
    s_sidebar.setPosition(640,0) ;

    //Initialisation des 4 joueurs
    player players[4] = {init(0), init(1), init(2), init(3)} ;

    //Boucle générale
    while (window.isOpen()){

        //Boucle principale
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
                //Fermeture du jeu
            case sf::Event::Closed :
                window.close();
                break ;
            //Lorsque l'on clique :D
            case sf::Event::MouseButtonReleased :
                if(event.mouseButton.button == sf::Mouse::Left){
                    if(!play){
                        t_content.loadFromFile("img/map.png") ;
                        s_content.setTexture(t_content) ;
                        play = true ;
                    }else{
                        if(players[actual].getMove()){
                            players[actual].move_ship(event.mouseButton.x/20, event.mouseButton.y/20) ;
                            //DEBUG AHERAGEFGAZE
                            if(!players[actual].getMove()){
                                actual = (actual+1)%4 ;
                                players[actual].ucanmove() ;
                            }
                        }
                    }
                }
                break ;
            default :
                break ;
            }
        }

        //Rafraichissement de l'écran
        window.clear();
        window.draw(s_content);
        window.draw(s_sidebar);
        if(play){
            for(int i=0; i<4; i++){
                window.draw(players[i].getSprite()) ;
            }
        }
        window.display();
    }

    return 0 ;
}
