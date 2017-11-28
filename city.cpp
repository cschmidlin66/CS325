#include "stdafx.h"
#include "city.hpp"
#include <iostream>
#include <string>
using std::string;

City::City() {

}

City::City(int cityNum, int x, int y) {
	cityNumber = cityNum;
	xCoord = x;
	yCoord = y;
}

int City::getCityNumber() {
	return cityNumber;
}

int City::getX() {
	return xCoord;
}

int City::getY() {
	return yCoord;
}