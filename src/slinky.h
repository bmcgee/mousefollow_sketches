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
	void update(ofPoint _drawPos);
	void draw();
	
	float radius;
	int fade;
	int numExtensions;
	ofColor color;
	bool clicked;
	
	float c;
	
	ofPoint pos;
	ofPoint endPos;
	ofPoint startPos;
	
	vector <ofPoint> positions;
	vector <ofPoint> endPositions;
	
	
	Slinky();
};

#endif /* slinky_h */
