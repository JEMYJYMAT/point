/*
 * point.h
 *
 *  Created on: Jan 29, 2024
 *      Author: ahmed gamal
 */

#ifndef point header
#define point header

using namespace std;
#include <iostream>

class point
{ private:
	float x;
	float y;
public:
	point();
	point(float x_cor, float y_cor);
	friend class lines;
};

#endif // point header
