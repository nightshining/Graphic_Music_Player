#pragma once

#include "ofMain.h"
#include "Buttons.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    Buttons b1, b2, b3, b4, b5, b6;
    Buttons box;
    
    ofTrueTypeFont title;
    ofTrueTypeFont controls;
    
    ofSoundPlayer s1, s2, s3, s4, s5, s6;
    
    float counter;
    int a, a2, a3, a4, a5, a6;
};
