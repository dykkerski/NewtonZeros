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
	string polyS = "";  // wielomian w postaci string 
	map<int, double> polyMap;

public:
	NewtonMethodModel();
	virtual ~NewtonMethodModel();
	void setPolyS(string _polyS) { polyS = _polyS; }
	string getPolyS() { return polyS; }
	void setMap(string);
	map<int, double> getPolyMap() { return polyMap; }
};

class Polynomial : public NewtonMethodModel
{
private:
	double valueP = 0.0;

public:
	Polynomial();
	~Polynomial();
	void setValueP(map<int, double>, double);
	double getValueP() { return valueP; }

};

class FirstDerivative : public Polynomial
{
private:
	map<int, double> firstDmap;
	double valueF = 0.0;
public:
	FirstDerivative();
	~FirstDerivative();
	void setFirstDmap(map<int, double>);
	map <int, double> getFirstDmap(){ return firstDmap; }
	void setValueF(map<int, double>, double);
	double getValueF() { return valueF; }

};

class NewtonMethod : public FirstDerivative
{
private:
	double zero;
public:
	NewtonMethod();
	~NewtonMethod();
	void setZero(double , map<int, double>, map<int, double>);
	double getZero() { return zero; }
};




