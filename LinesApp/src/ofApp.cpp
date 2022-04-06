#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("openFrameworks example title");
    ofBackground(0,0,0);
    ofSetFrameRate(15);
    linePercent = 0.0;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    gui.setup();
    gui.add(red.setup("red", 0, 0, 255));
    gui.add(green.setup("green", 60, 0, 255));
    gui.add(blue.setup("blue", 255, 0, 255));
    
    linePercent += 0.005;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(10);
    ofSetColor(red, green, blue);
    myLine.draw();
    myLine.getPointAtPercent (linePercent);
    ofSetColor(red, green, blue);
    ofDrawCircle(myLine.getPointAtPercent(linePercent), 30);
    
    
    ofSetLineWidth(2);
    ofSetColor(red, green, blue);
    myLine2.draw();
    myLine2.getPointAtPercent (linePercent);
    ofSetColor(red, green, blue);
    ofDrawBox(myLine2.getPointAtPercent(linePercent), 30);
    
    
    ofSetLineWidth(5);
    ofSetColor(red, green, blue);
    myLine3.draw();
    myLine3.getPointAtPercent (linePercent);
    ofSetColor(red, green, blue);
    ofDrawSphere(myLine3.getPointAtPercent(linePercent), 30);
    gui.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'd')
        myLine.clear();
        for(int i=0; i <5; i++){
            myLine.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
            
        }
    myLine.close();
    linePercent =0;
    
    if (key == 'f')
        myLine2.clear();
        for(int i=0; i <5; i++){
            //myLine2.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
            myLine2.curveTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        
        }
    myLine2.close();
            
    if (key == 'g')
        myLine3.clear();
        for (int i=0; i <5; i++){
            myLine3.curveTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        }

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
