#include<iostream>
using namespace std;

struct Point
{
	double x ;
	double y ;
};

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello OOP" << endl;
	int a; //объявление переменной а типа int
	Point A; //объявление переменной А типа Point
			 //создание объекта А структуры Point
			 //объявление экземпляра А структуры Point
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
}