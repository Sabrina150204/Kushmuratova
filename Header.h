#include <iostream>
#include <math.h>
using namespace std;

/**
@file Header.h
@brief ��������� � �� y ��������
@copyright ����
@author ����������� �.�.
@date 26.12.2023
@version 1.0.0
*/


/**
   ������ ������� �������� �� ���� �������������� ����� X
   /brief	���� ������������� �����
   /return number ������� ������������� �����
*/

double enterX() {
	double X;
	cout << "Enter a real number: ";
	cin >> X;
	return X;
}
/**
������ ������� �������� �� ���� �������������� ����� Y
/brief	���� �������������� �����
/return number ������� �������������� �����
*/

int enterY() {
	int Y;
	cout << "Enter a natural number: ";
	cin >> Y;
	return Y;
}
/**
������ ������� �������� �� ���������� X �� Y ��������
/brief	���������� �� Y ��������
/param X �������� ����� x
/param Y ���-�� ��������
/return ������� ������������ �����
*/
void roundXY(double X, int Y) {
	X = floor(X * pow(10, Y)) / pow(10, Y);
	cout << X;
}
/**
������ ������� �������� �� ������������ ����� �����
/brief	������� �����
/param X ���� �����
/param floor(X) ����� �����
/return ������� �����
*/
void interegizeX(double X) {
	X = X - floor(X);
	cout << X;
}

int main() {
	double X;
	int peopleAnswer, Y;
	/**
	X- ������������ �����
	Y- ����������� �����
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