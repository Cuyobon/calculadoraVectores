#pragma once
#include "Commons.h"
class Vector4
{
public:
	Vector4(double x, double y, double z, double w) : x_(x), y_(y), z_(z), w_(w) {}
	~Vector4() = default;

	Vector4 Suma(Vector4 v) {
		return Vector4(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
	}
	Vector4 Resta(Vector4 v) {
		return Vector4(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
	}
	Vector4 Multiplicacion(Vector4 v) {
		return Vector4(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
	}
	Vector4 Division(Vector4 v) {
		return Vector4(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
	}
	double ProductoEscalar(Vector4 v) {
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_) + (w_ * v.w_);
	}
	/*Vector4 ProductoVectorial(Vector4 v) {
		return Vector4((z_ * v.w_) - (w_ * v.z_), (y_ * v.w_) - (w_ * v.y_), (x_ * v.w_) - (w_ * v.x_), (y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}*/
	double Magnitud() {
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_) + (w_ * w_));
	}
	Vector4 Normalizar() {
		double mag = Magnitud();
		return Vector4(x_ / mag, y_ / mag, z_ / mag, w_ / mag);
	}
	void Mostrar() {
		cout << "(" << x_ << "," << y_ << "," << z_ << "," << w_ << ")" << endl;
	}
private:
	double x_, y_, z_, w_;
};