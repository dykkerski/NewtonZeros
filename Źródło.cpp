#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "NewtonMethodModel.h"
#include "NewtonMethodController.h"
#include "NewtonMethodView.h"

using namespace std;


int main(int argc, char * arv[])
{
	
	NewtonMethodModel nm;
	string wielomian = nm.getPolyS();
	cout << "Wielomian pobrany : " << wielomian << endl;

	vector<string> wielVec;
	

	system("pause");
	return EXIT_SUCCESS;
}




