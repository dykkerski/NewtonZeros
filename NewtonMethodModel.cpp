#include "NewtonMethodModel.h"


NewtonMethodModel::NewtonMethodModel()
{
	
};

NewtonMethodModel::~NewtonMethodModel()
{

};

Polynomial::Polynomial()
{

};

Polynomial::~Polynomial()
{

};
void Polynomial::setCoef(string _polyS)
{
	istringstream s(_polyS);
}

map<double, int> Polynomial::getCoef()
{
	return coef;
}

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
