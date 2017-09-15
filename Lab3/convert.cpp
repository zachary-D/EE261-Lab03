#include <iostream>
#include <iomanip>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

typedef std::pair<float, float> temperature;	//The temperature in Fahrenheit, and then in Celcius
typedef std::vector<temperature> dataTable;	//A vector of temperature type.  It's a vector instead of an array for expandability

float cToF(float celcius)
{
	return 9 * celcius / 5 + 32;
}

float fToC(float fahrenheit)
{
	return 5 * fahrenheit - 32 / 9;
}

temperature processTempPair(temperature input)
{
	return temperature{ fToC(input.first), cToF(input.second) };
}

dataTable processDataTable(dataTable inputs)
{
	dataTable dataOut;

	for (auto iter = inputs.begin(); iter != inputs.end(); iter++)
	{
		dataOut.push_back(processTempPair(*iter));
	}
	return dataOut;
}

int main ()
{
 
  
  dataTable input { /*temperature{ 212, 100 }, temperature{ 100, 50 },*/ temperature{ 122, 37 }/*, temperature{32, 0}*/ };		//The left half of the data table in Exercise 3, preloaded with the data from that table

  dataTable output = processDataTable(input);	//The right half of the data table in Exercise 3

  cout << setw(10) << "temp A (F)" << "|" << setw(10) << "temp B (C)" << "|" << setw(10) << "temp A (C)" << "|" << setw(10) << "temp B (F)" << endl;
  for (int i = 0; i < input.size() && i < output.size(); i++)
  {
	  cout << setw(9) << input[i].first << " |" << setw(9) << input[i].second << " |" << setw(9) << output[i].first << " |" << setw(9) << output[i].second << endl;

  }

  

  std::cin.ignore();
  return 0;
}
