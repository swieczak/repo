#include"friend.h"

Point::Point(float xx, float yy)
{
	x = xx;
	y = yy;

}
void Point::read()
{
	cout << "Podaj wsporzedne punktu: " << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	cout << endl;

}
Circle::Circle(float xx, float yy, float rr)
{
	x = xx;
	y = yy;
	r = rr;
}
void Circle::read()
{
	cout << "Podaj wspolrzedne srodka oraz promien okregu: " << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	cout << "r: "; cin >> r;
	cout << "u";

}
