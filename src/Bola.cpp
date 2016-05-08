#include "Bola.h"
#include "ofApp.h"

Bola::Bola(int r)
    {
        raio=r;
        xb=ofGetWidth()/2;
        yb=ofGetHeight()/2;
        xmax=ofGetWidth();
        ymax=ofGetHeight();
        vx=5;
        vy=5;
    }

void Bola::move()
    {
        xb=xb+vx;
        yb=yb+vy;
    }
//Desenha Bola
void Bola::display()
    {
        ofSetColor(255, 255, 255);
        ofDrawRectangle(xb,yb,10,10);
    }
//Detecta colisões
void Bola::colisao()
    {
        //Detecao de colisoes com limites do campo
        if (xb>xmax-raio) vx=vx*(-1);
        if (yb>ymax-raio) vy=vy*(-1);
        if (xb<0) vx=vx*(-1);
        if (yb<0) vy=vy*(-1);
        //Detecao de colisoes com as raquetes
        //Pontuação
    
    }