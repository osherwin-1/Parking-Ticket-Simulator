#pragma once
#include <string>
#include "ParkedCar.h"
#include "PoliceOfficer.h"
using namespace std;

class ParkingTicket {
private:
    ParkedCar car;
    int minutesOver;
    double fine;
    string officerName;
    string officerBadge;

    void calculateFine();

public:
    ParkingTicket(const ParkedCar& c, int overMinutes, const string& officerN, const string& officerB);

    void printTicket() const;
};
