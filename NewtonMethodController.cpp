#include "NewtonMethodController.h"

NewtonMethodController::NewtonMethodController()
{

};

NewtonMethodController::~NewtonMethodController()
{
	
};

double NewtonMethodController::solv(string _polyS, double x)
{
	model.setPolyS(_polyS);
    model.setMap(model.getPolyS());
	model.setValueP(model.getPolyMap(), x);
	model.setFirstDmap(model.getPolyMap());
	model.setValueF(model.getFirstDmap(), x);
	model.setZero(x, model.getPolyMap(), model.getFirstDmap());
	return model.getZero();
};

void NewtonMethodController::updateView()
{
	view.showResult(model.getPolyS(), model.getZero());
}







