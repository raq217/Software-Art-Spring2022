#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetCircleResolution(50);
    ofSetDepthTest(true);

    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(200,0);
    float time = ofGetElapsedTimef();
    for (int x= 1; x < 20; x ++){
    for (int i=0; i < 900; i+=5){
        ofSetColor(17 + 200 * sin(i * 0.01 + time + x),
            204 + 127 * sin(i * 0.011 + time),
            127 + 102 * sin(i * 0.012 + time));
        
        //ofDrawCircle(ofGetWidth()/2, i, 100);
      
        ofDrawCircle(ofGetWidth()/6 + 300 * sin( i * 1.05 + time + x), 50 + i, 50 + 40 * sin(i * 0.010 + time + x));
        ofDrawCircle(ofGetWidth()/5 + 250 * sin( i * 1.05 + time + x), 50 + i, 50 + 40 * sin(i * 0.009 + time + x));
        ofDrawCircle(ofGetWidth()/4 + 200 * sin( i * 1.04 + time + x), 50 + i, 50 + 40 * sin(i * 0.008 + time + x));
        ofDrawCircle(ofGetWidth()/3 + 150 * sin( i * 1.03 + time + x), 50 + i, 50 + 40 * sin(i * 0.007 + time + x));
        ofDrawCircle(ofGetWidth()/2 + 100 * sin( i * 1.02 + time + x), 50 + i, 50 + 40 * sin(i * 0.006 + time + x));
        ofDrawCircle(ofGetWidth()/1 + 50 * sin( i * 1.00 + time + x), 50 + i, 50 + 40 * sin(i * 0.005 + time + x));
        ofDrawCircle(ofGetWidth()/0.5 + 25 * sin( i * 1.05 + time + x), 50 + i, 50 + 40 * sin(i * 0.004 + time + x));
        ofDrawCircle(ofGetWidth()/0.25 + 5 * sin( i * 1.05 + time + x), 50 + i, 50 + 40 * sin(i * 0.003 + time + x));
       
    }
      
    }
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
