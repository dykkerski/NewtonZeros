#pragma once
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>

using namespace std;

class NewtonMethodModel
{
private:
	string polyS = "-2x^5 - 1x^2 - 4.45x + 12.6";  // wielomian w postaci string 
	map<int, double> polyM;

public:
	NewtonMethodModel();
	virtual ~NewtonMethodModel();
	void setPolyS(string _polyS) { polyS = _polyS; }
	string getPolyS() { return polyS; }
	void setMap(string);
	map<int, double> getMap() { return polyM; }
};

class Polynomial : public NewtonMethodModel
{
private:
	double valueP=0.0;

public:
	Polynomial();
	~Polynomial();
	void setValueP(map<int, double>, double);
	double getValueP() { return valueP; }

	
};

class FirstDerivative : public Polynomial
{
private:
public:
	FirstDerivative();
	~FirstDerivative();
};

class NewtonMethod : public FirstDerivative
{
private:
public:
	NewtonMethod();
	~NewtonMethod();
};




