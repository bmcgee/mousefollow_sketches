//
//  slinky.h
//  mouseFollow_sketch
//
//  Created by Brian McGee on 7/23/18.
//

#ifndef _SLINKY
#define _SLINKY

#include "ofMain.h"

class Slinky {
	public:
	
	void setup();
	void update(ofVec2f _drawPos);
	void draw();
	
	float radius;
	int fade;
	ofColor color;
	
	ofVec2f drawPos;
	
	Slinky();
};

#endif /* slinky_h */
