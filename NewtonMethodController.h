#pragma once
#include "NewtonMethodModel.h"
#include "NewtonMethodView.h"


class NewtonMethodController
{
private:
	NewtonMethod model;
	NewtonMethodView view;
	
public :
	NewtonMethodController();
	~NewtonMethodController();

	double solv(string, double);
	void updateView();

};

