#pragma once
#include"Point.h"
template <class T>
class Vector{
	Point<T>* points;
	int size;

	bool IsValidIndex(int index) {
		return (index >= 0 && index < size);
	}
public:
	Vector() :points(nullptr), size(0) {}
	Vector(const Vector& other) {
		size = other.size;
		if(size!=0)
		points = new Point<T>[size];
		for (int i = 0; i < size; i++)
			points[i] = other.points[i];

	}
	Vector(const Vector&& other) {
		size = other.size;
		points = other.points;
		other.points = nullptr;
		other.size = 0;
	}
	~Vector() {
		delete[]points;
		size = 0;
	}
	void Add(const Point<T> &point) {
		Point<T>* res = new Point<T>[++size];
		for (int i = 0; i < size-1; i++)
			res[i] = points[i];
		res[size - 1] = point;
		delete[]points;
		points = res;
	}
	void Print()const {
		for (int i = 0; i < size; i++) 
			points[i].Print();
			
	}
	Vector& operator=(const Vector& other) {
		if (this != &other) {
			size = other.size;
			delete[]points;
			if(size!=0)
			points = new Point<T>[size];
			for (int i = 0; i < size; i++)
				points[i] = other.points[i];
		}
		return *this;
	}
	Vector& operator=(const Vector&& other) {
		if (this != &other) {
			size = other.size;
			delete[]points;
			points = other.points;
			other.points = nullptr;
			other.size = 0;
		}
		return *this;
	}
	Point<T> GetPoint(int index) {
		if (IsValidIndex(index))
			return points[index];
		cout << "Incorrect index.\n";
		return Point<T>();
	}
	void SetPoint(T x, T y, int index) {
		if (!IsValidIndex(index))
			return;
		points[index].SetX(x);
		points[index].SetY(y);
	}
};


