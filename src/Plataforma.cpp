//
//  Plataforma.cpp
//  pong
//
//  Created by Digitópia on 07/05/16.
//
//

#include "Plataforma.h"
#include "ofApp.h"
#include "Bola.h"
//construtor plataforma
Plataforma::Plataforma(int altura,int largura, int xpre,int xprd)
    {
        hr=altura;
        lr=largura;
        xrd=xprd;
        yrd=ofGetHeight()/2;
        xre=xpre;
        yre=ofGetHeight()/2;
    }
//Desenha o campo
void Plataforma::display()
    {
        ofSetColor(0,0,0);
        ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
        ofSetColor(255,255,255);
        ofDrawLine(ofGetWidth()/2,0,ofGetWidth()/2,ofGetHeight());
    }
//Desenha raquete
void Plataforma::raquete()
{
    ofDrawRectangle(xrd,yrd,hr,lr);
    ofDrawRectangle(xre,yre,hr,lr);
}


//void Plataforma::colisao()
//{
//    int proe;
//    int prod;
//    
//    proe=xre+lr;
//    prod=xrd;
//    
//    //if(xb<proe) vx=vx*(-1);
//    //if(xb>prod) vx=vx*(-1);
//}