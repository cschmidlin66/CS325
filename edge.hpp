#ifndef EDGE_HPP
#define EDGE_HPP
#include <string>
#include "city.hpp"
using std::string;
using namespace std;

class Edge {

protected:
	City cityOne;
	City cityTwo;
	int distance;
	


public:
	Edge();
	Edge(City one, City two);
	City getCityOne();
	City getCityTwo();
	int getDistance();
	

};
#endif