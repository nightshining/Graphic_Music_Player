
#include <iostream>
#include "ofMain.h"
#include "Buttons.h"
using namespace std;


void Buttons::draw(int posX, int posY, int size, int alpha) {
    
    
    ofSetColor(0, 0, 0, 90);
    ofNoFill();
    ofCircle(posX, posY, size);
    ofSetColor(0, 240, 255);
    ofNoFill();
    ofCircle(posX, posY, size - 10);
    
    ofFill();
    ofSetColor(255, 50, 100, alpha);
    ofCircle(posX, posY, size - 10);
    
}

void Buttons::border(){
    
    ofSetColor(0);
    ofNoFill();
    ofRect(50, 50, 500, 500);
    ofSetColor(245);
    ofFill();
    ofRect(50, 50, 500, 500);
    
    
}




