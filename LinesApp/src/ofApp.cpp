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
    linePercent += 0.005;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(10);
    ofSetColor(50, 50, 255);
    myLine.draw();
    myLine.getPointAtPercent (linePercent);
    ofSetColor(255, 0, 0);
    ofDrawCircle(myLine.getPointAtPercent(linePercent), 30);
    
    
    ofSetLineWidth(2);
    ofSetColor(100,100,50);
    myLine2.draw();
    myLine2.getPointAtPercent (linePercent);
    ofSetColor(0, 255, 0);
    ofDrawBox(myLine2.getPointAtPercent(linePercent), 30);
    
    
    ofSetLineWidth(5);
    ofSetColor(0,0,200);
    myLine3.draw();
    myLine3.getPointAtPercent (linePercent);
    
    ofSetColor(0, 0, 255);
    ofDrawSphere(myLine3.getPointAtPercent(linePercent), 30);
    

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
