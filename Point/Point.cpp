#include "Point.h" // ���� ����������
#include<iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Construct by default\n";
	count++;
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Construct by 2 params\n";
	count++;

}
void Point::Init(int a, int b)
{
	x = a;
	y = b;
}
void Point::Init()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
}
void Point::Print()
{
	cout << "X: " << x << "\tY: " << y << endl;
}

void Point::PrintCount()
{
	cout << "Count: " << count << endl;
}

Point Point::operator+(Point& b)//obj.Sum(obj2)
{
	Point res;
	res.x = this->x + b.x;
	res.y = this->y + b.y;
	return res;
}

Point Point::operator+(int a)
{
	return Point(x+a, y+a);
}

bool Point::operator>(Point& b)
{
	if (x>b.x && y>b.y)
	{
		return true;

	}
	return false;
}

bool Point::operator<(Point& b)
{
	if (x < b.x && y < b.y)
	{
		return true;

	}
	return false;
}
bool Point::operator==(Point& b)
{
	if (x == b.x && y == b.y)
	{
		return true;

	}
	return false;
}
bool Point::operator!=(Point& b)
{
	if (x != b.x && y != b.y)
	{
		return true;

	}
	return false;
}
bool Point::operator>=(Point& b)
{
	if (x >= b.x && y >= b.y)
	{
		return true;

	}
	return false;
}
bool Point::operator<=(Point& b)
{
	if (x <= b.x && y <= b.y)
	{
		return true;

	}
	return false;
}

int Point::count = 0; // ��������� ������������� ������ ����