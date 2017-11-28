#include "stdafx.h"
#include "edge.hpp"
#include "city.hpp"
#include <iostream>
#include <string>
using std::string;

Edge::Edge() {

}

Edge::Edge(City one, City two){
	cityOne = one;
	cityTwo = two;
	int x = one.getX()-two.getX();
	int y = one.getY()-two.getY();
	x = x*x;
	y = y*y;
	int sum = x+y;
	int root = sqrt(sum);
	distance = root; 

	
}

City Edge::getCityOne() {
	return cityOne;
}

City Edge::getCityTwo() {
	return cityTwo;
}

int Edge::getDistance(){
	return distance;
}