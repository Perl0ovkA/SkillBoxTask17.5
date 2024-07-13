#include <iostream>
#include <math.h>
using namespace std;


class Vector
{
private:
	double x;
	double y;
	double z;
public:
	Vector() : x(0),y(0),z(0)
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}


int Show()
	{
	int V = (x + y + z);
	double LV = pow(V, 2);
		cout << "\n" << x << " " << y << " " << z << endl << sqrt(LV) << endl;

		return sqrt(LV);
	}
};


int main()
{
	Vector V(3, 3, 3);
	V.Show();
}