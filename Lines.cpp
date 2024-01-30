/*
 * Lines.cpp
 *
 *  Created on: Jan 29, 2024
 *      Author: ahmed gamal
 */

#include "lines.h"

lines::lines()
{
	m = 0;
	c = 0;
}

lines::lines(point p1, point p2)
{
	m = (p2.y - p1.y) / (p2.x - p1.x);
	c = p1.y - m * p1.x;
}

lines lines::operator+(int n)
{
	lines l;
	l.m = m;
	l.c = c + n;
	return l;
}

ostream& operator<<(ostream& out, lines l)
{
	out << "y=" << l.m << "x+" << l.c << endl;
	return out;
}
