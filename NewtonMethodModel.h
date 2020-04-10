#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class NewtonMethodModel
{
private:
public:
	NewtonMethodModel();
	~NewtonMethodModel();
};

class Polynomial : public NewtonMethodModel
{
private:
	string polyS;          // wielomian w postaci string 

public:
	Polynomial();
	~Polynomial();
	void setPolyS(string _polyS) { polyS = _polyS; }
};

class FristDerivative : public Polynomial
{
private:
public:

};

class NewtonMethod
{
private:
public:
	NewtonMethod();
	~NewtonMethod();

};




