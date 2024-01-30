/*
 * Lines.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ahmed gamal
 */

using namespace std;
#include <iostream>
#include "point.h"

class lines
{
private:
	float m;
	float c;
public:
	lines();
	lines(point p1, point p2);
	lines operator +(int n);
	friend ostream& operator <<(ostream& out, lines l);

};

