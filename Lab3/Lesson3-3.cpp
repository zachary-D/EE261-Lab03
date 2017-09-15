#include <iostream>
#include <iomanip>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::setprecision;

const int first = 1066;
const int second = 1492;
const int third = 512;
const int fourth = 1;
const int fifth = -23;


void printRight(int value, int width = 10)
{
	cout << setw(width) << value << endl;
}

void printPrecision(float value, int precision = 4)
{
	cout << setprecision(precision) << value << endl;
}


int main()
{
	printRight(first);
	printRight(second);
	printRight(third);
	printRight(fourth);
	printRight(fifth);

	cout << "The answer is:" << setprecision(5) << (float)(first + second) / (float)(third + fourth + fifth) << endl;

	{//To get ourselves a new 'locality' so we can redefine first, second, etc. without issue
		const float first = 23.62;
		const float second = 46.0;
		const float third = 43.4443;
		const float fourth = 100.1;
		const float fifth = 98.98;
		printPrecision(first, 4);
		printPrecision(second, 4);
		printPrecision(third, 4);
		printPrecision(fourth, 5);
		printPrecision(fifth, 5);

	}


	cin.get();
	return 0;
}