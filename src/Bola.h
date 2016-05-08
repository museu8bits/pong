#ifndef BOLA_H
#define BOLA_H

class Bola
{
public:
    Bola(int raio);
    void display();
    void move();
    void colisao();
    //vector velocidade
    int vx;
    int vy;
    //vector posicao
    int xb,yb;
    //dimensao da bola
    int raio;
    //maximo campo
    int xmax;
    int ymax;
};

#endif
