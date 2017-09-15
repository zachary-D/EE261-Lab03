#include <iostream>
#include <iomanip>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

const int first = 1066;
const int second = 1492;
const int third = 512;
const int fourth = 1;
const int fifth = -23;


void printRight(int value, int width = 10)
{
	cout << setw(width) << value << endl;
}


int main()
{
	printRight(first);
	printRight(second);
	printRight(third);
	printRight(fourth);
	printRight(fifth);




	cin.get();
	return 0;
}