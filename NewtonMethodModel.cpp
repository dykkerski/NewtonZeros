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
	cout << "_polyS po usunieciu spacji : " << _polyS << endl;    // test
	regex term("((-?[0-9]+(\\.[0-9]+)?))?x(\\^?([0-9]+))?|-?[0-9]+(\\.[0-9]+)");   // wzorzec regex
	vector<std::string> monos;                           // wektor jednomianów : suma to dany wielomian 

	
	map<string,string> polyMs; // mapa wspó³czynników i odpowidaj¹cych wartoœci potêg
	string coef = "1", exp = "0";

	copy(sregex_token_iterator(_polyS.begin(),_polyS.end(), term), 
		sregex_token_iterator(), back_inserter(monos));  // tworzy wektor jednomianow

	for (auto n : monos)   //  test
	{
		cout << n << endl;
	}

	size_t pos = 0;
	for (auto n : monos)
	{
		pos = n.find_first_of('^');
		cout << "pos : " << pos << endl;
		if (pos != string::npos)                          //  dla jednomianu : x^n
		{
			
			coef = n.substr(0, pos-1);
			exp = n.substr(pos + 1);
			polyMs.insert(pair<string, string>(exp, coef));
			continue;
		}

		pos = n.find_first_of('x');
		if (pos != string::npos)                         // dla jednomianu : x^1
		{
			coef = n.substr(0, pos);
			polyMs.insert(pair<string, string>("1", coef));   
			continue;
		}

		polyMs.insert(pair<string, string>("0", n));     // dla wyrazu wolnego : x^0
	}

	cout << "Zawartosc polyMs : " << endl;
	for (auto n : polyMs)
	{
		cout << n.first << " " << n.second << endl;
	}
	for (auto n : polyMs)
	{
		polyM.insert(pair<int, double>(stoi(n.first), stod(n.second)));
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
	for (auto n : _polyM)
	{
		valueP += (n.second * (pow(x, n.first))); 
	}
};


FirstDerivative::FirstDerivative()
{

};

FirstDerivative::~FirstDerivative()
{

};


NewtonMethod::NewtonMethod()
{


};

NewtonMethod::~NewtonMethod()
{
	
};
