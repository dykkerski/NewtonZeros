#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include "NewtonMethodModel.h"
#include "NewtonMethodController.h"
#include "NewtonMethodView.h"
#include <regex>
#include <iterator>

using namespace std;


int main(int argc, char * arv[])
{
	
	NewtonMethodModel nm;
	string wielomian = nm.getPolyS();
	cout << "Wielomian pobrany : " << wielomian << endl;

	nm.setMap(wielomian);

	//map<double, int> mapaTest = ;

	cout << "Mapa test : <int, double>" << endl;
	
	for (auto n : nm.getMap())
	{
		cout  << n.first << " " << setprecision(16) << n.second << endl;
	}
	
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}




