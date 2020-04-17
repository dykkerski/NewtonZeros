
#include <string>
//#include "NewtonMethodModel.h"
#include "NewtonMethodController.h"
//#include "NewtonMethodView.h"


using namespace std;


int main(int argc, char * arv[])
{

	
	NewtonMethodController control;

	 control.solv("-2x^3 - 2x^2 - 4.45x + 12.6", 2.0);
	 control.updateView();


	/*
	double x = 2.0; // punkt startowy 
	NewtonMethod nm;
	string wielomian = nm.getPolyS();
	cout << "Wielomian pobrany : " << wielomian << endl;

	nm.setMap(wielomian);

	cout << "Mapa wielomianu : <int, double>" << endl;
	
	for (auto n : nm.getPolyMap())
	{
		cout  << n.first << " " << setprecision(16) << n.second << endl;
	}
	
	cout << "Wartosc wielomianu dla x = " << x << " wynosi : " ;

	nm.setValueP(nm.getPolyMap(), x);

	cout << nm.getValueP() << endl;
	
	nm.setFirstDmap(nm.getPolyMap());

	cout << "Mapa pierwszej pochodnej : <int, double>" << endl;


	for (auto n : nm.getFirstDmap())
	{
		cout << n.first << " " << setprecision(16) << n.second << endl;
	}
	
	nm.setValueF(nm.getFirstDmap(), x);

	cout << "Wartosc pierwszej pochodnej : " ;

	cout << nm.getValueF() << endl << endl;

	nm.setZero(x, nm.getPolyMap(), nm.getFirstDmap());

	cout << endl << "Wartosc miejsca zerowego wynosi : " << nm.getZero() << endl;
	cout << endl;*/
	system("pause");
	return EXIT_SUCCESS;
}




