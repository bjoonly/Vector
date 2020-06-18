#include<iostream>
#include"Vector.h"
using namespace std;
int main() {
	Point<int>p1(12,-7),p2(5,1),p3;
	cout << "P1: ";
	p1.Print();
	cout << "\nP2: ";
	p2.Print();
	cout << "\nP1++: ";
	p3 = p1++;
	p3.Print();
	cout << "\n++P1: ";
	(++p1).Print();
	cout << "\nP1--: ";
	p3 = p1--;
	p3.Print();
	cout << "\n--P1: ";
	(--p1).Print();
	cout << "\nP1 > P2? " << boolalpha << (p1 > p2);
	cout << "\nP1 < P2? " << boolalpha << (p1 < p2);
	cout << "\n!P1: ";
	(!p1).Print();
	Vector<int>v1;
	v1.Add(p1);
	v1.Add(p2);
	cout << "\nV1: ";
	v1.Print();
	Vector<double>v2;
	v2.Add(Point<double> (5.2, 7.33));
	v2.Add(Point<double>(5.7777, 14.22));
	cout << "\nV2: ";
	v2.Print();
	
	return 0;
}