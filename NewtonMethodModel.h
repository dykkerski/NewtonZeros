#pragma once
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <map>

using namespace std;

class NewtonMethodModel
{
private:
	string polyS = "x^3 - x^2 - x + 1";  // wielomian w postaci string 
	

public:
	NewtonMethodModel();
	virtual ~NewtonMethodModel();
	void setPolyS(string _polyS) { polyS = _polyS; }
	string getPolyS() { return polyS; }


};

class Polynomial : public NewtonMethodModel
{
private:
	map<double, int> coef;  // wspó³czynniki wielomianu

public:
	Polynomial();
	~Polynomial();

	void setCoef(string);  // funkcja zamienia string na mapê wspó³czynników
	map<double, int> getCoef();
	
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




