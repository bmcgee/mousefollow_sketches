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

void Slinky::setup(int _x, int _y, int _copies, float scalar) {
	slinkyImage.load("trump_limps.png");
	slinkyImage.resize(slinkyImage.getWidth()*scalar, slinkyImage.getHeight() * scalar);
	
	radius = ofRandom(4,20);
	startPos.set(_x, _y);
	numExtensions = _copies;
	for (int i=0; i<numExtensions;i++) {
		ofPoint tempPos = startPos;
		positions.push_back(tempPos);
	}
}
void Slinky::update(int _x, int _y){
	
	// This will be something later when we
	// sent in the end point.
	//drawPos = _drawPos;
	
	
	//TODO: update all the positions based on the lerp position
	// 	Then just animate the lerp position.

	c = .85;
	endPos.set(ofGetMouseX(),ofGetMouseY());
	//startPos.set(_x, _y);
	pos.set(startPos.getInterpolated(endPos, c));
	
	if (clicked) {
		for (auto i=0; i<positions.size(); i++) {
			float lerpAmt = ofMap(int(i), 0, positions.size(), 0, 1);
			ofPoint tempPos = startPos.getInterpolated(pos, lerpAmt);
			positions[i] = tempPos;
		}
	} else {
		
	}

}

void Slinky::animate() {
	clicked = !clicked;
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
		ofSetColor(ofColor::white);
		slinkyImage.draw(positions[i].x, positions[i].y);
	}
	
	ofSetColor(ofColor::blue);
	//ofDrawCircle(pos.x,pos.y, 5);

	
}
