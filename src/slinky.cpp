//
//  slinky.cpp
//  mouseFollow_sketch
//
//  Created by Brian McGee on 7/23/18.
//

#include <stdio.h>
#include "ofMain.h"
#include "slinky.h"

Slinky::Slinky(){
}

void Slinky::setup() {
	radius = ofRandom(4,20);
	numExtensions = 20;
	for (int i=0; i<numExtensions;i++) {
		ofPoint tempPos = startPos;
		positions.push_back(tempPos);
	}
}
void Slinky::update(ofPoint _endPos){
	
	// This will be something later when we
	// sent in the end point.
	//endPos = _endPos;
	
	
	//TODO: update all the positions based on the lerp position
	// 	Then just animate the lerp position.

	c = .25;
	endPos.set(ofGetMouseX(),ofGetMouseY());
	startPos.set(ofGetWidth()/2, ofGetHeight()/2);
	pos.set(startPos.getInterpolated(endPos, c));
	
	for (auto i=0; i<positions.size(); i++) {
		float lerpAmt = ofMap(int(i), 0, positions.size(), 0, 1);
		ofPoint tempPos = startPos.interpolate(pos, lerpAmt);
		positions[i] = tempPos;
	}
}
void Slinky::draw(){
	

	
	for (auto i=0; i<positions.size(); i++) {
		
		//position setting
		
		//float lerpAmt = ofMap(i, 0, 20, 0, 1);
		//ofPoint tempPos = startPos.interpolate(endPos, lerpAmt);
		
		
		//color setting
		float opacity = ofMap(i, 0, 20, 0, 255);
		ofSetColor(255, 255, 255, int(opacity+0.5));
		
		//drawsetting
		ofDrawCircle(positions[i].x, positions[i].y, radius);
	}
	
	ofSetColor(ofColor::red);
	ofDrawCircle(pos.x,pos.y, 5);

	
}
