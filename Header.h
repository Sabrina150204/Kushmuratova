#include <iostream>
#include <math.h>
using namespace std;

/**
@file Header.h
@brief Округлить х до y разрядов
@copyright ВоГУ
@author Кушмуратова С.Д.
@date 26.12.2023
@version 1.0.0
*/


/**
   Данная функция отмечает за ввод положительного числа X
   /brief	Ввод вещественного числа
   /return number Возврат вещественного числа
*/

double enterX() {
	double X;
	cout << "Enter a real number: ";
	cin >> X;
	return X;
}
/**
Данная функция отмечает за ввод положительного числа Y
/brief	Ввод положительного числа
/return number Возврат положительного числа
*/

int enterY() {
	int Y;
	cout << "Enter a natural number: ";
	cin >> Y;
	return Y;
}
/**
Данная функция отмечает за округление X до Y разрядов
/brief	Округление до Y разрядов
/param X значение числа x
/param Y кол-во разрядов
/return выводит вещественное число
*/
void roundXY(double X, int Y) {
	X = floor(X * pow(10, Y)) / pow(10, Y);
	cout << X;
}
/**
Данная функция отмечает за отбрасывание целой части
/brief	Дробное число
/param X само число
/param floor(X) целая часть
/return Дробное число
*/
void interegizeX(double X) {
	X = X - floor(X);
	cout << X;
}

int main() {
	double X;
	int peopleAnswer, Y;
	/**
	X- Вещественное число
	Y- Натуральное число
	*/
	while (true) {

		cout << "Enter a menu option:\n";
		cout << "1. Enter a real number\n";
		cout << "2. Enter a natural number\n";
		cout << "3. Round X to Y decimal places\n";
		cout << "4. Discard the integer part of X\n";
		cout << "I choose option: ";
		cin >> peopleAnswer;

		switch (peopleAnswer) {
		case 1:
			X = enterX();
			break;

		case 2:
			Y = enterY();
			break;

		case 3:
			roundXY(X, Y);
			break;

		case 4:
			interegizeX(X);
			break;

		case 5:
			return 0;
			break;

		default:
			cout << "Invalid option selected.\n";
		}
	}

	return 0;
}