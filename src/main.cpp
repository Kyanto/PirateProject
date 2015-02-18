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

    //Affichage de la partie principale
    sf::Texture t_content ;
    t_content.loadFromFile("img/menu.png") ;
    sf::Sprite s_content ;
    s_content.setTexture(t_content) ;

    //Barre latérale
    sf::Texture t_sidebar ;
    t_sidebar.loadFromFile("img/sidebar.png") ;
    sf::Sprite s_sidebar ;
    s_sidebar.setTexture(t_sidebar) ;
    s_sidebar.setPosition(640,0) ;
        //Joueur
    sf::Texture t_sidebar_joueur ;
    t_sidebar_joueur.loadFromFile("img/bat1.png") ;
    sf::Sprite s_sidebar_joueur ;
    s_sidebar_joueur.setTexture(t_sidebar_joueur) ;
    s_sidebar_joueur.setPosition(780,147) ;
        //Description des cases
    sf::Texture t_sidecase ;
    t_sidecase.loadFromFile("img/mer.png") ;
    sf::Sprite s_sidecase ;
    s_sidecase.setTexture(t_sidecase) ;
    s_sidecase.setPosition(640,276) ;

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

                        // A CHANGER !!
                        // APPUYER SUR "VOYAGER" POUR VOYAGER
                        // CHANGER LA DESCRIPTION (TEXTURE) QUAND ON CLIQUE SUR UNE CASE

                        //Si déplacement
                        if(players[actual].getMove()){
                            if(event.mouseButton.x/20 < 32) players[actual].move_ship(event.mouseButton.x/20, event.mouseButton.y/20) ;
                        }
                        //Si fin du tour
                        if(event.mouseButton.x > 640 && event.mouseButton.y > 590){
                                actual = (actual+1)%4 ;
                                players[actual].ucanmove() ;
                                if(actual==0) t_sidebar_joueur.loadFromFile("img/bat1.png") ;
                                if(actual==1) t_sidebar_joueur.loadFromFile("img/bat2.png") ;
                                if(actual==2) t_sidebar_joueur.loadFromFile("img/bat3.png") ;
                                if(actual==3) t_sidebar_joueur.loadFromFile("img/bat4.png") ;
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
            window.draw(s_sidebar_joueur) ;
            window.draw(s_sidecase) ;
        }
        window.display();
    }

    return 0 ;
}
