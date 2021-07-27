#include <iostream>
using namespace std;
double rectangle(double x, double y)
{
	return x * y;
}

double triangle(double x, double y)
{
	return x * y * 0.5;
}

double recPrism(double x, double y, double z)
{
	return x * y * z;
}

double triPrism(double x, double y, double z)
{
	return x * y * 0.5 * z;
}

void invalidInput()
{
	cout << "Your input is invalid. Re-open the program to try again.\n";
	system("pause");
	exit(1);
}

void successExit()
{
	system("pause");
	exit(0);
}

int main()
{
	cout << "This program can calculate volumes/areas of triangles, select prisms, and rectangles.\nWhat shape would you like to calculate the dimensions of?\nTriangle (t), Rectangle (r), Prism (p)\n";
	char shape;
	cin >> shape;
	double x;
	double y;
	double z;
	double vol;
	switch (shape)
	{
	case 'p':
		cout << "What type of prism?\nTriangular (t), Rectangular (r)\n";
		cin >> shape;
		cout << "What are the dimensions of the prism? Enter the dimensions in the 'x y z' format.\n";
		cin >> x >> y >> z;
		if (x <= 0 or y <= 0 or z <= 0)
		{
			cout << "Dimensions must be positive non-zero values. Re-open the program to try again.\n";
			system("pause");
			exit(1);
		}
		switch (shape)
		{
		case 't':
			vol = triPrism(x, y, z);
			cout << "\nThe volume of a triangular prism that is " << x << " units long, " << y << " units wide, and " << z << " units deep is " << vol << " cubic units large.\n";
			successExit();
			break;
		case 'r':
			vol = recPrism(x, y, z);
			cout << "\nThe volume of a rectangular prism that is " << x << " units wide, " << y << " units long, and " << z << " units deep is " << vol << " cubic units large.\n";
			successExit();
			break;
		default:
			invalidInput();
		}
		break;
	case 't':
		cout << "Enter the dimensions of the triangle in the 'x y' format.\n";
		cin >> x >> y;
		if (x <= 0 or y <= 0)
		{
			cout << "Dimensions must be positive non-zero values. Re-open the program to try again.\n";
			system("pause");
			exit(1);
		}
		vol = triangle(x, y);
		cout << "\nThe area of a triangle that is " << x << " units long, and " << y << " units high is " << vol << " square units large.\n";
		successExit();
		break;
	case 'r':
		cout << "Enter the dimensions of the triangle in the 'x y' format.\n";
		cin >> x >> y;
		if (x <= 0 or y <= 0)
		{
			cout << "Dimensions must be positive non-zero values. Re-open the program to try again.\n";
			system("pause");
			exit(1);
		}
		vol = rectangle(x, y);
		cout << "\nThe area of a rectangle that is " << x << " units long, and " << y << " units high is " << vol << " square units large.\n";
		successExit;
		break;
	}
}