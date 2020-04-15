#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
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

	//regex term("[-+]?(\\d*)x(\\^[0-9])*");

	//regex term("[-+]?(\\d*)x(\\^\\d+)?|\\d+");

	nm.toMap(wielomian);

	
	 
	
	
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}




