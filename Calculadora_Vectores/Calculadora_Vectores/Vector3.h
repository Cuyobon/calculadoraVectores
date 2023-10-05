#pragma once
#include "Commons.h"
class Vector3
{
public:
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	Vector3 Suma(Vector3 v) {
		return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
	}
	Vector3 Resta(Vector3 v) {
		return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
	}
	Vector3 Multiplicacion(Vector3 v) {
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}
	Vector3 Division(Vector3 v) {
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}
	double ProductoEscalar(Vector3 v) {
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}
	Vector3 ProductoVectorial(Vector3 v) {
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}
	double Magnitud() {
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
	}
	Vector3 Normalizar() {
		double mag = Magnitud();
		return Vector3(x_ / mag, y_ / mag, z_ / mag);
	}
	void Mostrar() {
		cout << "(" << x_ << "," << y_ <<"," << z_ << ")" << endl;
	}
private:
	double x_, y_, z_;
};


