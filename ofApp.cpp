#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	//ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
	ofEnableDepthTest();
	ofEnableSmoothing();

	ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();
	ofRotateY(ofGetFrameNum() % 360);

	ofColor c;
	float noise_value;
	for (int x = -ofGetWidth() / 2; x < ofGetWidth() / 2 + 60; x += 120) {
		for (int y = -ofGetHeight() / 2; y < ofGetHeight() / 2 + 60; y += 120) {
			for (int z = -ofGetWidth() / 2; z < ofGetWidth() / 2 + 60; z += 120) {
				noise_value = ofNoise(x * 0.0005, y * 0.0005, z * 0.0005, ofGetFrameNum() * 0.01);

				if (noise_value > 0.5) {
					c.setHsb(ofMap(noise_value, 0.5, 1.0, 0, 255), 255, 255);
					ofFill();
				}
				else
				{
					c = ofColor(255, 64);
					ofNoFill();
				}

				ofSetColor(c);
				ofBox(ofVec3f(x, y, z), 60);
			}
		}
	}

	this->cam.end();
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
