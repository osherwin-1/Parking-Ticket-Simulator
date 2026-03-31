#pragma once
#define PARKEDCAR_H
#include <string>
using namespace std;

class ParkedCar {
private:
    string make; // Car information
    string model;
    string color;
    string licenseNumber;
	int minutesParked; // Duration of parking

public:
    ParkedCar(const string& mk, const string& mdl, const string& clr, const string& lic, int mins);

    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicenseNumber() const;
    int getMinutesParked() const;
};