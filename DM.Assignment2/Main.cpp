
#include <iostream>
#include <conio.h>

using namespace std;

double getLengthFromUser();
double getWidthFromUser();
double CalculateArea(double length, double width);
void DisplayArea(double area);

int main()
{
	double length = getLengthFromUser();
	double width = getWidthFromUser();
	double area = CalculateArea(length, width);

	DisplayArea(area);
	return 0;
}


double getLengthFromUser()
{
	double length = 0;
	cout << "Enter the length of your triangle: " ;
	cin >> length;
	return length;
}

double getWidthFromUser()
{
	double width = 0;
	cout << "Enter the width of your triangle: ";
	cin >> width;
	return width;
}

double CalculateArea(double length, double width)
{
	return length * width;
}

void DisplayArea(double area)
{
	cout << "The area of your triangle is: " << area;
}





