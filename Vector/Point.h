#pragma once
#include<iostream>
#include<cmath>
using namespace std;

template <class T>
class Point {
	T x;
	T y;
	
public:
	Point(T x=0, T y=0):x(x),y(y){}
	void Print()const {
		cout << "(" << x << ", " << y << ")";
	}
	Point& operator++() {
		++x; ++y;
		return *this;
	}
	Point operator++(int) {
		return Point(x++, y++);
	}
	Point& operator--() {
		--x; --y;
		return *this;
	}
	Point operator--(int) {
		return Point(x--, y--);
	}
	bool operator>(const Point& p2) {
		return sqrt(pow(x, 2) + pow(y, 2)) > sqrt(pow(p2.x, 2) + pow(p2.y, 2));
	 }
	bool operator<( const Point& p2) {
		return sqrt(pow(x, 2) + pow(y, 2)) < sqrt(pow(p2.x, 2) + pow(p2.y, 2));
	 }
	Point& operator!() {
		x *= -1;
		y *= -1;
		return *this;
	}
	T GetX()const {
		return x;
	}
	T GetY()const {
		return y;
	}
	void SetX(T x) {
		this->x = x;
	}
	void SetY(T y) {
		this->y = y;
	}
};



