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
    for (int i=0;i<20;i++) {
      
        ofVec2f tempPos(ofGetMouseX(),ofGetMouseY());

        ofPushMatrix();

            ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        
            float opacity = ofMap(i, 0, 20, 0, 255);
            ofSetColor(255, 255, 255, int(opacity+0.5));
            cout << tempPos << "\n";
            tempPos = tempPos/i;
            ofDrawCircle(tempPos.x, tempPos.y, radius);
        
        ofPopMatrix();
    }
    
}
