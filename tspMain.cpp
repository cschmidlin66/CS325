#include "stdafx.h"
#include "city.hpp"
#include "edge.hpp"
#include <stdlib.h>
#include <fstream>
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using std::string;
using std::vector;
using namespace std;


void printCities(vector<City>& array)
{
	int i;
	for (i = array.size() - 1; i >= 0; i--) {
		cout << array[i].getCityNumber() << " ";
	}
	cout << '\n';
}

void PrintCityInfo(City city) {
	int cityNum = city.getCityNumber();
	int x = city.getX();
	int y = city.getY();
	cout << "City Number: " << cityNum << " X: " << x << " Y: " << y << endl;
}

void printCitiesFullDetail(vector<City>& array)
{
	int i;
	for (i = array.size() - 1; i >= 0; i--) {
		PrintCityInfo(array[i]);
	}
	cout << '\n';
}



void printVector(vector<string>& array)
{
	int i;
	for (i = array.size() - 1; i >= 0; i--) {
		cout << array[i] << " ";
	}
	cout << '\n';
}



void clearCityVector(vector<City>& array) {
	int vSize = array.size();
	for (int i = 0; i < vSize; i++) {
		array.pop_back();
	}
}

void clearEdgeVector(vector<Edge>& array) {
	int vSize = array.size();
	for (int i = 0; i < vSize; i++) {
		array.pop_back();
	}
}







// int main(int argc, char *argv[]) {
int main() {
	string fileName = "tsp_example_1.txt";
	//string fileName = argv[1];
	ifstream myFile;
	myFile.open(fileName);
	if (myFile.is_open()) {
		
		string line;
		vector<City> cityArray;
		vector<Edge> edgeGraph;
		while (getline(myFile, line)) {
			int lineLength = line.length();
			int firstPoint = line.find(' ');
			int cityNum = atoi(line.substr(0, firstPoint).c_str());
			string subLine = line.substr(firstPoint+1, lineLength);
			int subLineLength = subLine.length();
			int secondPoint = subLine.find(' ');
			int xCoordinate = atoi(subLine.substr(0, secondPoint).c_str());
			int yCoordinate = atoi(subLine.substr(secondPoint, subLineLength).c_str());
			City newCity = City(cityNum, xCoordinate, yCoordinate);
			cityArray.push_back(newCity);
		}
		
		printCitiesFullDetail(cityArray);
		

	}
	myFile.close();
	return 0;
}