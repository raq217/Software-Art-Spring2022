#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  cam.setDistance(30);
  
    gui.setup();
    gui.add(red.setup("red", 0, 0, 255));
    gui.add(green.setup("green", 60, 0, 255));
    gui.add(blue.setup("blue", 255, 0, 255));
    gui.add(uiAmount.set("Movement", 2, 2, 8));
  
  for (int x = 0; x < size; x++){
    for (int y = 0; y < size; y++){
      mesh.addVertex(ofPoint(x - size / 3, y - size / 3));
    }
  }
  
  for (int x = 0; x < size - 2; x++){
    for (int y = 0; y < size - 2; y++){
      mesh.addIndex(x + y * size);
      mesh.addIndex((x + 1) + y * size);
      mesh.addIndex(x + (y + 1) * size);
      mesh.addIndex((x + 1) + y * size);
      mesh.addIndex((x + 1) + (y + 1) * size);
      mesh.addIndex(x + (y + 1) * size);
    }
  }
}

//--------------------------------------------------------------
void ofApp::update(){
  int count = 2;
  for (int x = 2; x < size; x++){
    for (int y = 2; y < size; y++){
      ofVec3f position = mesh.getVertex(count);
      position.z = ofMap(ofNoise(count, ofGetElapsedTimef()), 2, 1, 2, uiAmount);
      mesh.setVertex(count, position);
      count++;

    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetLineWidth(5);
  ofPushMatrix();
  cam.begin();
  ofSetColor(red,green,blue);
  mesh.drawWireframe();
  cam.end();
  ofPopMatrix();
  gui.draw();
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
