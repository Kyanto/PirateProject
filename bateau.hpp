#ifndef BATEAU_HPP
#define BATEAU_HPP

class bateau{

    public :

    bateau(int x, int y) ;
    void move(int x, int y) ;

    private :

    int coord_x ;
    int coord_y ;
    int level ;

};

#endif // BATEAU_HPP
