#include "bateau.h"

bateau::bateau(int x, int y) : coord_x(x), coord_y(y), level(1){}

void bateau::move(int x, int y){

    coord_x = x ;
    coord_y = y ;
}
