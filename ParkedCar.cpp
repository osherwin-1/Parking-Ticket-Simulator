#include "ParkedCar.h"

ParkedCar::ParkedCar(const string& mk, const string& mdl, const string& clr, const string& lic, int mins)
    : make(mk), model(mdl), color(clr), licenseNumber(lic), minutesParked(mins) {
}

string ParkedCar::getMake() const { return make; }
string ParkedCar::getModel() const { return model; }
string ParkedCar::getColor() const { return color; }
string ParkedCar::getLicenseNumber() const { return licenseNumber; }
int ParkedCar::getMinutesParked() const { return minutesParked; }