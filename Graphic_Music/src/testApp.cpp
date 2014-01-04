#include "testApp.h"
#include "Buttons.h"

int position[3] = {150, 300, 450};

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(255);
    ofSetCircleResolution(50);
    ofSetVerticalSync(true);
    ofEnableSmoothing();

    a, a2, a3, a4, a5, a6 = 0;
    //load font 
    title.loadFont("frabk.ttf", 20);
    controls.loadFont("frabk.ttf", 10);
    
    //load sounds
    s1.loadSound("1.wav");
    s2.loadSound("2.wav");
    s3.loadSound("3.wav");
    s4.loadSound("4.wav");
    s5.loadSound("5.wav");
    s6.loadSound("6.wav");
   
}

//--------------------------------------------------------------
void testApp::update(){

    counter = counter + .25f;
    a--;
    a2--;
    a3--;
    a4--;
    a5--;
    a6--;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    float grow = 50 + 10 * sin(counter);
    //border
    box.border();
    
    //Title_Controls
    ofSetColor(50);
    title.drawString("Graphic Sample Player: ", 50, 30);
    controls.drawString("Controls: To play each sample use keys 1 - 6", ofGetWidth() / 3, 540);
    
    //top buttons
    
    b1.draw(position[0], 200, grow, a);
    b2.draw(position[1], 200, grow, a2);
    b3.draw(position[2], 200, grow, a3);
    
    
    //bottom buttons
    b4.draw(position[0], 400, grow, a4);
    b5.draw(position[1], 400, grow, a5);
    b6.draw(position[2], 400, grow, a6);
    
    
    
    cout << grow << endl;
    
  
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    int p = key;
    
    switch(p)
    {
        case 49:
            a = 100;
            s1.play();
            cout << "play sound_1" << endl; 
            break;
            
        case 50 :
            a2 = 100;
            s2.play();
            cout << "play sound_2" << endl;
            break;
            
        case 51 :       
            a3 = 100;
            s3.play();
            cout << "play sound_3" << endl;
            break;
            
        case 52:
            a4 = 100;
            s4.play();
            cout << "play sound_4" << endl;
            break;
            
        case 53 :
            a5 = 100;
            s5.play();
            cout << "play sound_5" << endl; 
            break;
            
        case 54 :
            a6 = 100;
            s6.play();
            cout << "play sound_6" << endl;
            break;

        //default     
        default :
            cout << "Invalid sample" << endl;
    }
    
    cout << "The key pressed is: " << key << endl;
    
    cout << "alpha is = " << a << endl;

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
