#include <iostream>
#include <cmath>


using namespace std;

//Task1
class Test
{
private:
	int a = 12;
	int b = 14;
	int c = 0;

public:

	int GetC()
	{
		c = a + b;
		return c;
	}
};

//Task2
class Vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;
	double m = 0;

public:
	Vector() : x(3), y(2), z(7)
	{}
	void Show()
	{
		cout << '\n' << x << ' ' << y << ' ' << z << '\n';
	}

	void VectorModule()
	{
		m = sqrt( pow(x, 2) + pow(y, 2) + pow(z, 2) );
		cout << m << '\n';
	}
};

int main()
{
	//Task1
	Test temp;
	cout << temp.GetC() << '\n';

	//Task2
	Vector v;
	v.Show();
	cout << '\n';
	cout << "Vector module: ";
	v.VectorModule();


}