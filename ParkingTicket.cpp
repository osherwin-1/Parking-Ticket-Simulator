#include "ParkingTicket.h"
#include <iostream>
#include <cmath>
using namespace std;

ParkingTicket::ParkingTicket(const ParkedCar& c, int overMinutes, const string& officerN, const string& officerB)
    : car(c), minutesOver(overMinutes), officerName(officerN), officerBadge(officerB) {
    calculateFine();
}

void ParkingTicket::calculateFine() {
    fine = 25; // first hour or part
    if (minutesOver > 60) {
        int extraHours = ceil((minutesOver - 60) / 60.0);
        fine += extraHours * 10;
    }
}

void ParkingTicket::printTicket() const {
    cout << "---- Parking Ticket ----\n";
    cout << "Car: " << car.getMake() << " " << car.getModel()
        << ", Color: " << car.getColor()
        << ", License: " << car.getLicenseNumber() << endl;
    cout << "Minutes Parked: " << car.getMinutesParked()
        << ", Minutes Purchased: " << car.getMinutesParked() - minutesOver << endl;
    cout << "Minutes Over: " << minutesOver << endl;
    cout << "Fine: $" << fine << endl;
    cout << "Issuing Officer: " << officerName << ", Badge: " << officerBadge << endl;
    cout << "------------------------\n";
}