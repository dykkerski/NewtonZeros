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
template<typename T> 
class Polynomial : public NewtonMethodModel
{
private:
	string polyS;          // wielomian w postaci string 

public:
	Polynomial();
	~Polynomial();
	void setPolyS(string _polyS) { polyS = _polyS; }
};

class FirstDerivative : public Polynomial<double>
{
private:
public:
	FirstDerivative();


};

class NewtonMethod
{
private:
public:
	NewtonMethod();
	~NewtonMethod();
};




