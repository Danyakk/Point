#include<iostream>
#include "Point.h"
using namespace std;

int main()
{/*
	Point::PrintCount();*/
	Point a(1, 2), b(3, 4);/*
	Point::PrintCount();*/
	/*Point d = a + b;
	Point d1 = a.operator+(b);
	d1 = a + 10;
	d1.Print();*/

	Point c = ++a;
	c.Print();
	a.Print();

	Point d = --a;
	d.Print();
	a.Print();

	/*Point d1 = a * b;
	d1.Print();
	Point d2 = b - a;
	d2.Print();
	Point d3 = a / b;
	d3.Print();*/

	/*if (a > b)
	{
		cout << "a>b\n";
	}
	if (a < b)
	{
		cout << "a<b\n";
	}
	if (a == b)
	{
		cout << "a==b\n";
	}
	if (a != b)
	{
		cout << "a!=b\n";
	}
	if (a >= b)
	{
		cout << "a>=b\n";
	}
	if (a <= b)
	{
		cout << "a<=b\n";
	}*/
}