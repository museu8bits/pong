//
//  Plataforma.hpp
//  pong
//
//  Created by Digitópia on 07/05/16.
//
//

#ifndef PLATAFORMA_H
#define PLATAFORMA_H

class Plataforma
{
public:
    Plataforma(int altura,int largura, int xpre,int xprd);
    void display();
    void raquete();
    void colisao(int vx,int vy, int xb);
    int lr,hr;
    int yrd,xrd,yre,xre;

};

#endif