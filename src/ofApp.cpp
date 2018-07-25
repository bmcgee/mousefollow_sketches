#include "ofApp.h"


Slinky slinky;

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	
	scalar = .6;
	trump.load("trump_base_01.png");
	trump.resize(trump.getWidth()*scalar,
		     trump.getHeight()*scalar
		     );
	
	slinky.setup(285,908,200,scalar);
	

	

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(ofColor::white);
	trump.draw(0,0);

	slinky.update(ofGetMouseX(), ofGetMouseY());
	slinky.draw();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'x') {
		cout << ofGetMouseX() << "," << ofGetMouseY();
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
	slinky.animate();
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
