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
	string polyS = "-2x^3 - 4x^2 - 4.45x + 1";  // wielomian w postaci string 
	map<double, int> polyM;

public:
	NewtonMethodModel();
	virtual ~NewtonMethodModel();
	void setPolyS(string _polyS) { polyS = _polyS; }
	string getPolyS() { return polyS; }
	map<double, int> toMap(string);

};

class Polynomial : public NewtonMethodModel
{
private:
	map<double, int> polyM;  // wspó³czynniki wielomianu

public:
	Polynomial();
	~Polynomial();

	
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




