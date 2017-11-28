#ifndef CITY_HPP
#define CITY_HPP
#include <string>
using std::string;
using namespace std;

class City {

protected:
	int cityNumber;
	int xCoord;
	int yCoord;


public:
	City();
	City(int cityNum, int x, int y);
	int getCityNumber();
	int getX();
	int getY();

};
#endif