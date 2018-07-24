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
void Slinky::update(ofPoint _drawPos){
	drawPos = _drawPos;
}
void Slinky::draw(){
    for (int i=0;i<20;i++) {
      
        ofPoint mousePos(ofGetMouseX(),ofGetMouseY());
	ofPoint centerPos(ofGetWidth()/2, ofGetHeight()/2);

        ofPushMatrix();

            //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        
            float opacity = ofMap(i, 0, 20, 0, 255);
            ofSetColor(255, 255, 255, int(opacity+0.5));
	    
            cout << centerPos << "\n";
	    
	    float lerpAmt = ofMap(i, 0, 20, 0, 1);
	    
	    ofPoint tempPos = centerPos.interpolate(mousePos, lerpAmt);
	    
            ofDrawCircle(tempPos.x, tempPos.y, radius);
        
        ofPopMatrix();
    }
    
}
