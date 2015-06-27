#ifndef TANKCLASS_H
#define TANKCLASS_H

#include "ofMain.h"
#include "ofx3DModelLoader.h"
class TankClass{
    public:
        void setup();
        void update();
        void draw();
        void keyPressed();
        void keyReleased();


        ofParameterGroup tankParam;
        ofParameter<float> xPos;
        ofParameter<float> yPos;
        ofParameter<float> zPos;
        ofParameter<float> xSpeed;
        ofParameter<float> ySpeed;
        ofParameter<float> zSpeed;
        ofParameter<float> rSpeed;
        ofParameter<float> rotation;
        ofParameter<bool> up;
        ofParameter<bool> down;
        ofParameter<bool> left;
        ofParameter<bool> right;
        ofParameter<int> upk;
        ofParameter<int> downk;
        ofParameter<int> leftk;
        ofParameter<int> rightk;
        ofParameter<int> red;
        ofParameter<int> green;
        ofParameter<int> blue;

    	int wobblex;
    	int wobbley;
    	int wobblez;
	bool f = false;
int oldx;
int oldy;
int oldz;



        ofx3DModelLoader Tank;
        ofLight light;


};

#endif // TANKCLASS_H
