#pragma once
#include "Commons.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
class Calculadora
{
public:
	Calculadora();
	~Calculadora();

	void Menu() {
		cout << "(2) 2 Vectores" << endl;
		cout << "(3) 3 Vectores" << endl;
		cout << "(4) 4 Vectores" << endl;
		cout << "(1) Cerrar programa" << endl;
		cout << "Seleccione cuantos vectores desea utilizar: ";
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
			exit(0);
			break;
		case 2:
			dosVectores();
			break;
		case 3:
			tresVectores();
			break;
		case 4:
			cuatroVectores();
			break;
		default:
			cout << "Selecciona una opcion de las anteriores" << endl;
			break;
		}
	}
	void dosVectores()
	{
		cout << "(1) Suma (+)" << endl;
		cout << "(2) Resta (-)" << endl;
		cout << "(3) Multiplicacion (*)" << endl;
		cout << "(4) Division (/)" << endl;
		cout << "(5) Producto Punto" << endl;
		cout << "(6) Producto Cruz" << endl;
		cout << "(7) Magnitud (||i||)" << endl;
		cout << "(8) Normalizar" << endl;
		cout << "(9) Regresar al menu inicial" << endl;
		cout << "Seleccione la operacion que desee: ";
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Suma(v2);
			cout << "El producto de la suma de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 2:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Resta(v2);
			cout << "El producto de la resta de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 3:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Multiplicacion(v2);
			cout << "El producto de la multiplicacion de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 4:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Division(v2);
			cout << "El producto de la division de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 5:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			double v3 = v1.ProductoEscalar(v2);
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 6:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.ProductoVectorial(v2);
			cout << "El producto cruz de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 7:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			Vector2 v1(x1, y1);
			double mag = v1.Magnitud();
			cout << "La magnitud del vector es: " << mag << endl;
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 8:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			Vector2 v1(x1, y1);
			Vector2 v2 = v1.Normalizar();
			cout << "El vector normalizado es: ";
			v2.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	}
	void tresVectores() {
		cout << "(1) Suma (+)" << endl;
		cout << "(2) Resta (-)" << endl;
		cout << "(3) Multiplicacion (*)" << endl;
		cout << "(4) Division (/)" << endl;
		cout << "(5) Producto Punto" << endl;
		cout << "(6) Producto Cruz" << endl;
		cout << "(7) Magnitud (||i||)" << endl;
		cout << "(8) Normalizar" << endl;
		cout << "(9) Regresar al menu inicial" << endl;
		cout << "Seleccione la operacion que desee: ";
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Suma(v2);
			cout << "El producto de la suma de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 2:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Resta(v2);
			cout << "El producto de la resta de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 3:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Multiplicacion(v2);
			cout << "El producto de la multiplicacion de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 4:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Division(v2);
			cout << "El producto de la division de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 5:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			double v3 = v1.ProductoEscalar(v2);
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 6:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			cout << "Ingrese el valor de X del segundo vector (x2): ";
			cin >> x2;
			cout << "Ingrese el valor de Y del segundo vector (y2): ";
			cin >> y2;
			cout << "Ingrese el valor de Z del segundo vector (z2): ";
			cin >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.ProductoVectorial(v2);
			cout << "El producto cruz de los vectores es: ";
			v3.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 7:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			Vector3 v1(x1, y1, z1);
			double mag = v1.Magnitud();
			cout << "La magnitud del vector es: " << mag << endl;
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 8:
		{
			cout << "Ingrese el valor de X del primer vector (x1): ";
			cin >> x1;
			cout << "Ingrese el valor de Y del primer vector (y1): ";
			cin >> y1;
			cout << "Ingrese el valor de Z del primer vector (z1): ";
			cin >> z1;
			Vector3 v1(x1, y1, z1);
			Vector3 v2 = v1.Normalizar();
			cout << "El vector normalizado es: ";
			v2.Mostrar();
			cout << "풴olver al menu inicial? ";
			cout << "(1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	
	}
	void cuatroVectores() {
		{
			cout << "(1) Suma (+)" << endl;
			cout << "(2) Resta (-)" << endl;
			cout << "(3) Multiplicacion (*)" << endl;
			cout << "(4) Division (/)" << endl;
			cout << "(5) Producto Punto" << endl;
			cout << "(6) Magnitud (||i||)" << endl;
			cout << "(7) Normalizar" << endl;
			cout << "(8) Regresar al menu inicial" << endl;
			cout << "Seleccione la operacion que desee: ";
			int op;
			cin >> op;
			switch (op)
			{
			case 1:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				cout << "Ingrese el valor de X del segundo vector (x2): ";
				cin >> x2;
				cout << "Ingrese el valor de Y del segundo vector (y2): ";
				cin >> y2;
				cout << "Ingrese el valor de Z del segundo vector (z2): ";
				cin >> z2;
				cout << "Ingrese el valor de W del segundo vector (w2): ";
				cin >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.Suma(v2);
				cout << "El producto de la suma de los vectores es: ";
				v3.Mostrar();
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 2:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				cout << "Ingrese el valor de X del segundo vector (x2): ";
				cin >> x2;
				cout << "Ingrese el valor de Y del segundo vector (y2): ";
				cin >> y2;
				cout << "Ingrese el valor de Z del segundo vector (z2): ";
				cin >> z2;
				cout << "Ingrese el valor de W del segundo vector (w2): ";
				cin >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.Resta(v2);
				cout << "El producto de la resta de los vectores es: ";
				v3.Mostrar();
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 3:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				cout << "Ingrese el valor de X del segundo vector (x2): ";
				cin >> x2;
				cout << "Ingrese el valor de Y del segundo vector (y2): ";
				cin >> y2;
				cout << "Ingrese el valor de Z del segundo vector (z2): ";
				cin >> z2;
				cout << "Ingrese el valor de W del segundo vector (w2): ";
				cin >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.Multiplicacion(v2);
				cout << "El producto de la multiplicacion de los vectores es: ";
				v3.Mostrar();
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 4:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				cout << "Ingrese el valor de X del segundo vector (x2): ";
				cin >> x2;
				cout << "Ingrese el valor de Y del segundo vector (y2): ";
				cin >> y2;
				cout << "Ingrese el valor de Z del segundo vector (z2): ";
				cin >> z2;
				cout << "Ingrese el valor de W del segundo vector (w2): ";
				cin >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				Vector4 v3 = v1.Division(v2);
				cout << "El producto de la division de los vectores es: ";
				v3.Mostrar();
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;
				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}
				break;
			}
			case 5:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				cout << "Ingrese el valor de X del segundo vector (x2): ";
				cin >> x2;
				cout << "Ingrese el valor de Y del segundo vector (y2): ";
				cin >> y2;
				cout << "Ingrese el valor de Z del segundo vector (z2): ";
				cin >> z2;
				cout << "Ingrese el valor de W del segundo vector (w2): ";
				cin >> w2;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2(x2, y2, z2, w2);
				double v3 = v1.ProductoEscalar(v2);
				cout << "El producto escalar de los vectores es: " << v3 << endl;
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;

				if (op == 1)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 6:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				Vector4 v1(x1, y1, z1, w1);
				double mag = v1.Magnitud();
				cout << "La magnitud del vector es: " << mag << endl;
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;

				if (op == 2)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 7:
			{
				cout << "Ingrese el valor de X del primer vector (x1): ";
				cin >> x1;
				cout << "Ingrese el valor de Y del primer vector (y1): ";
				cin >> y1;
				cout << "Ingrese el valor de Z del primer vector (z1): ";
				cin >> z1;
				cout << "Ingrese el valor de W del primer vector (w1): ";
				cin >> w1;
				Vector4 v1(x1, y1, z1, w1);
				Vector4 v2 = v1.Normalizar();
				cout << "El vector normalizado es: ";
				v2.Mostrar();
				cout << "풴olver al menu inicial? ";
				cout << "(1) Si (2) No ";
				int op;
				cin >> op;

				if (op == 2)
				{
					Menu();
				}
				else
				{
					exit(0);
				}

				break;
			}
			case 8:
			{
				Menu();
				break;
			}
			}
		}
	}
	private:
		double w1, w2, x1, x2, y1, y2, z1, z2;
};