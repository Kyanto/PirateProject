#ifndef BATEAU_H
#define BATEAU_H

class bateau{

    public :

    bateau(int x, int y) ;
    void move(int x, int y) ;

    private :

    int coord_x ;
    int coord_y ;
    int level ;

};

#endif // BATEAU_H
