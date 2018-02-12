/*
Protobyte Library 0.1.6
Ira Greenberg 2016
*/

#ifndef __PROTOCONTROLLER_H__
#define __PROTOCONTROLLER_H__

#include <iostream>
#include "ProtoBaseApp.h"

using namespace ijg;

class ProtoController : public ProtoBaseApp {

public:
	void init();
	void run();
	void display();

	// Key and Mouse Events
	void keyPressed();
	void mousePressed();
	void mouseRightPressed();
	void mouseReleased();
	void mouseRightReleased();
	void mouseMoved();
	void mouseDragged();

	// Window Events
	void onResized();
	void onClosed();
	Toroid t;
	Vec3 vecs[9][9][9];
	float rotAng[9][9][9];
	float rots[9][9][9];
	float abacusW = 0;
	float abacusH = 0;
	float abacusD = 0;
	float beadGap = 0;
};

#endif //__PROTOCONTROLLER_H__
