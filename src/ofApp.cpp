#include "Plataforma.h"
#include "ofApp.h"
#include "Bola.h"

//--------------------------------------------------------------
void ofApp::setup(){
    b=new Bola(20);
    p=new Plataforma(10,100,20,ofGetWidth()-20-10);
}

//--------------------------------------------------------------
void ofApp::update(){
    b->move();
    
    b->colisao();
}

//--------------------------------------------------------------
void ofApp::draw(){
    p->display();

    b->display();
    p->raquete();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key=='q') yre++;
    if (key)=='
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
