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
	
	void setup(int _x, int _y, int _copies, float _scalar);
	void update(int _x, int _y);
	void draw();
	void animate();
	
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
	
	ofImage slinkyImage;
	
	
	Slinky();
};

#endif /* slinky_h */
