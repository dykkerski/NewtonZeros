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

map<double, int> NewtonMethodModel::toMap(string _polyS)
{
	_polyS = regex_replace(_polyS, regex("\\s+"), "" );            // usuwa spacje jesli wystepuja
	cout << "_polyS po usunieciu spacji : " << _polyS << endl;    // test
	regex term("(-?[0-9]+(\\.[0-9]+)?)x(\\^?([0-9]+))?|-?[0-9]+");   // wzorzec regex
	vector<std::string> monos;                           // wektor jednomianów : suma to dany wielomian 

	map<double, int> testMap;
	testMap.insert(pair<double, int>(1.1, 40));   // mapa testowa
	
	map<double, int> polyM;
	map<string,string> polyMs;

	string coef, exp;

	copy(sregex_token_iterator(_polyS.begin(),_polyS.end(), term), 
		sregex_token_iterator(), back_inserter(monos));  // tworzy wektor jednomianow

	for (auto n : monos)   //  test
	{
		cout << n << endl;
	}
	size_t pos;

	for (auto n : monos)
	{
		
		pos = n.find_first_of('x');
		cout << "pos : " << pos << endl;
		if (pos != string::npos)
		{
			coef = n.substr(0, pos);
			exp = n.substr(pos + 1);
			polyMs.insert(pair<string, string>(coef, exp));
		}
		else

			polyMs.insert(pair<string, string>(n, "0"));  // 

		cout << "polyMs: z petli : " << endl;
		for (auto n : polyMs)
		{
			cout << n.first << " " << n.second << endl;
		}
	}

	cout << "Zawartosc polyMs : " << endl;
	for (auto n : polyMs)
	{
		cout << n.first << " " << n.second << endl;
	}
	return testMap;
};

Polynomial::Polynomial()
{

};

Polynomial::~Polynomial()
{

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
