#include "NewtonMethodView.h"
#include <iomanip>
using namespace std;


NewtonMethodView::NewtonMethodView()
{

}

NewtonMethodView::~NewtonMethodView()
{
	
}

void NewtonMethodView::showResult(string _polyS,  double res)
{
	cout << "Badany wielomian : " << _polyS << endl;
	cout << "Miejsce zerowe : " << setprecision(16) << res << endl;
}


