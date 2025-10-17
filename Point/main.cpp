#include<iostream>
#include "Point.h"
using namespace std;


Point operator+ (int a, Point& b)
{
	Point res(a + b.GetX(), a + b.GetY());

	return res;
}
//
//Point operator- (int a, Point& b)
//{
//	Point res(a - b.GetX(), a - b.GetY());
//	return res;
//}
//
//Point operator* (int a, Point& b)
//{
//	Point res(a * b.GetX(), a * b.GetY());
//	return res;
//}
//
//Point operator/ (int a, Point& b)
//{
//	Point res(a / b.GetX(), a / b.GetY());
//	return res;
//}
//
//Point operator* (Point& b, int a)
//{
//	Point res(a * b.GetX(), a * b.GetY());
//	return res;
//}



Point operator-- ( Point & b)
{
	b.SetX(b.GetX() - 2);
	b.SetY(b.GetY() - 2);
	return b;
}

Point operator -- (Point& b, int)
{
	Point temp(b.GetX(), b.GetY());
	b.SetX(b.GetX() - 2);
	b.SetY(b.GetY() - 2);
	return temp;
}


ostream& operator<<(ostream& os, Point& obj)
{
	os << "X: " << obj.GetX() << "Y:" << obj.GetY() << endl;
    return os;
}

istream& operator>>(istream& is, Point& obj)
{
	int temp;
	is >> temp;
	obj.SetX(temp);
	is >> temp;
	obj.SetY(temp);
	return is;
}

int main()
{/*
	Point::PrintCount();*/
	Point a(1, 2), b(3, 4);
	
	cout << a << endl;
	cin >> a;

	cout << a << endl;


	/*
	Point::PrintCount();*/
	/*Point d = a + b;
	Point d1 = a.operator+(b);
	d1 = a + 10;
	d1.Print();*/
	

	//Point d = 10 + a;
	//d = a + 10;
	//--d;
	//d--;
	//d.Print();

	//Point a1 = 15 - a;
	//a1.Print();

	//Point a2 = 2 * a;
	//a2.Print();

	//Point a3 = 10 / a;
	//a3.Print();

	//Point a4 = a * 2;	
	//a4.Print();


	/*Реализовать след глобальніе перегрузки :
    
	Point a1 = 15 - a;
	Point a2 = 2*a;
	Point a3 = 10/a;
	Point a4 = a*2 ; */

	/*Point c = ++a;
	c.Print();
	a.Print();

	Point d = --a;
	d.Print();
	a.Print();*/

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