#include "NewtonMethodModel.h"
#include <regex>
#include <iterator>
#include <string>
#include <iostream>
#include <map>

using namespace std;

NewtonMethodModel::NewtonMethodModel()
{
	
};

NewtonMethodModel::~NewtonMethodModel()
{

};


void NewtonMethodModel::setMap(string _polyS)
{
	_polyS = regex_replace(_polyS, regex("\\s+"), "" );            // usuwa spacje jesli wystepuja
	
	regex term("((-?[0-9]+(\\.[0-9]+)?))?x(\\^?([0-9]+))?|-?[0-9]+(\\.[0-9]+)");   // wzorzec regex
	vector<std::string> monos;                           // wektor jednomianów : suma to dany wielomian 

	
	map<string,string> polyMs; // mapa wspó³czynników i odpowidaj¹cych wartoœci potêg
	string coef = "1", exp = "0";

	copy(sregex_token_iterator(_polyS.begin(),_polyS.end(), term), 
		sregex_token_iterator(), back_inserter(monos));  // tworzy wektor jednomianow

	/*
	cout << "Jednomiany : " << endl;
	for (auto n : monos)   //  test
	{
		cout << n << endl;
	}
	*/

	size_t pos = 0;
	for (auto n : monos)
	{
		pos = n.find_first_of('^');

		if (pos != string::npos)                          //  para wspó³czynnik/potêga dla jednomianu : x^n
		{			                              
			coef = n.substr(0, pos - 1);
			exp = n.substr(pos + 1);
			polyMs.insert(pair<string, string>(exp, coef));
			continue;
		}

		pos = n.find_first_of('x');
		if (pos != string::npos)                         // para wspó³czynnik/potêga dla jednomianu : x^1
		{	
			coef = n.substr(0, pos);			
			polyMs.insert(pair<string, string>("1", coef));   
			continue;
		}

		polyMs.insert(pair<string, string>("0", n));     // para wspó³czynnik/potêga dla wyrazu wolnego : x^0
	}

	
	for (auto n : polyMs)
	{
		polyMap.insert(pair<int, double>(stoi(n.first), stod(n.second)));
	}
};

Polynomial::Polynomial()
{

};

Polynomial::~Polynomial()
{

};

void Polynomial::setValueP(map<int, double> _polyM, double x)
{
	valueP = 0.0;
	for (auto n : _polyM)
	{
		valueP += (n.second * pow(x, n.first)); 
	}
};


FirstDerivative::FirstDerivative()
{

};

FirstDerivative::~FirstDerivative()
{

};

void FirstDerivative::setFirstDmap( map<int, double>_polyM )
{
	for (auto n : _polyM)
	{
		firstDmap.insert(pair<int, double>( n.first - 1, n.first * n.second));
	}
};

void FirstDerivative::setValueF(map<int, double>_polyM, double x)
{
	valueF = 0.0;
	for (auto n : _polyM)
	{
		valueF += (n.second * pow(x, n.first));
	}
};

NewtonMethod::NewtonMethod()
{

};

NewtonMethod::~NewtonMethod()
{
	
};

void NewtonMethod::setZero(double x, map<int, double> _polyMap, map<int, double> _firstDmap)
{
	int iter = 20;
	double prec = 1e-15;
	for (int i = 0; i < iter; i++)
	{
		setValueP(_polyMap, x);
		setValueF(_firstDmap, x);
		if (abs(getValueP()) < prec)
			break;
		zero = x - (getValueP() / getValueF());
		x = zero;
		// cout << " x [" << i << "] : " << x << endl;
	}
};




