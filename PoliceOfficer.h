#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;
    ParkedCar car;
    ParkingMeter meter;

public:
    PoliceOfficer(const string& n, const string& badge, const ParkedCar& c, const ParkingMeter& m);

    bool inspectCar() const;
    ParkingTicket issueTicket() const;
};
