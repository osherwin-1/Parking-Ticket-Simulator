#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"

class ParkingTicket; // forward declaration

class PoliceOfficer {
private:
    std::string name;
    std::string badgeNumber;
    ParkedCar car;
    ParkingMeter meter;

public:
    PoliceOfficer(const std::string& n, const std::string& badge,
        const ParkedCar& c, const ParkingMeter& m);

    bool inspectCar() const;
    ParkingTicket issueTicket() const;
};