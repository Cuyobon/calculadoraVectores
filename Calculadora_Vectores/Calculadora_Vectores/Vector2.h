#pragma once
#include "Commons.h"

class Vector2
{
public: 
	Vector2(double x, double y) : x_(x), y_(y) {}
	~Vector2() = default;

	Vector2 Suma(Vector2 v) {
		return Vector2(x_ + v.x_, y_ + v.y_);
	}
	Vector2 Resta(Vector2 v) {
		return Vector2(x_ - v.x_, y_ - v.y_);
	}
	Vector2 Multiplicacion(Vector2 v) {
		return Vector2(x_ * v.x_, y_ * v.y_);
	}
	Vector2 Division(Vector2 v) {
		return Vector2(x_ / v.x_, y_ / v.y_);
	}
	double ProductoEscalar(Vector2 v) {
		return (x_ * v.x_) + (y_ * v.y_);
	}
	Vector2 ProductoVectorial(Vector2 v) {
		return Vector2((x_ * v.y_) - (y_ * v.y_), (x_ * v.y_) - (y_ * v.x_));
	}
	double Magnitud() {
		return sqrt((x_ * x_) + (y_ * y_));
	}
	Vector2 Normalizar() {
		double mag = Magnitud();
		return Vector2(x_ / mag, y_ / mag);
	}
	void Mostrar() {
		cout << "(" << x_ << "," << y_ << ")" << endl;
	}
private: 
	double x_, y_;
};

