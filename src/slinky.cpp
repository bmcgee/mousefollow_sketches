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
}
void Slinky::update(ofVec2f _drawPos){
	drawPos = _drawPos;
}
void Slinky::draw(){
	ofSetColor(ofColor::red);
	ofDrawCircle(drawPos.x, drawPos.y, radius);
	}
