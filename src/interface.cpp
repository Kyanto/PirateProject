#include "interface.hpp"
#include <iostream>

using namespace std;

// Boucle de jeu, principale, le programme quoi, juste tout
void game(){

    /*
    0 -> Case mer
    1 -> Petite ville
    2 -> Ville moyenne
    3 -> Grande ville
    4 -> Tourbillon
    5 -> Ile sauvage
    6 -> Monstre épique
    9 -> Inconnu
    */
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

    //Initialisation des 4 joueurs
    player* Players[4] ;

    Players[0] = new player(0,0) ;
    sf::Texture t_player1 ;
    t_player1.loadFromFile("img/bat1.png") ;
    sf::Sprite s_player1 ;
    s_player1.setTexture(t_player1) ;

    Players[1] = new player(31,0) ;
    sf::Texture t_player2 ;
    t_player2.loadFromFile("img/bat2.png") ;
    sf::Sprite s_player2 ;
    s_player2.setTexture(t_player2) ;

    Players[2] = new player(0,31) ;
    sf::Texture t_player3 ;
    t_player3.loadFromFile("img/bat3.png") ;
    sf::Sprite s_player3 ;
    s_player3.setTexture(t_player3) ;

    Players[3] = new player(31,31) ;
    sf::Texture t_player4 ;
    t_player4.loadFromFile("img/bat4.png") ;
    sf::Sprite s_player4 ;
    s_player4.setTexture(t_player4) ;

    //Création de la fenetre de jeu, chargement de la carte
    sf::RenderWindow window(sf::VideoMode(960, 640), "The Pirate Project");

    sf::Texture t_map ;
    t_map.loadFromFile("img/map.png") ;
    sf::Sprite s_map ;
    s_map.setTexture(t_map) ;

    sf::Texture t_menu ;
    t_menu.loadFromFile("img/menu.png") ;
    sf::Sprite s_menu ;
    s_menu.setTexture(t_menu) ;
    s_menu.setPosition(640,0) ;

    //Boucle générale
    while (window.isOpen())
    {
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

                break ;
            default :
                break ;
            }
        }

        //Rafraichissement de l'écran
        window.clear();
        window.draw(s_map);
        window.draw(s_menu);
        window.display();
    }
}
