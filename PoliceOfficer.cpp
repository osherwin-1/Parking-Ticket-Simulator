#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include <iostream>

PoliceOfficer::PoliceOfficer(const string& n, const string& badge, const ParkedCar& c, const ParkingMeter& m)
    : name(n), badgeNumber(badge), car(c), meter(m) {
}

bool PoliceOfficer::inspectCar() const {
    return car.getMinutesParked() > meter.getMinutesPurchased();
}

ParkingTicket PoliceOfficer::issueTicket() const {
    int overMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
    return ParkingTicket(car, overMinutes, name, badgeNumber);
}