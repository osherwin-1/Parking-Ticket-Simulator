#include <iostream>
#include <vector>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

using namespace std;

int main() {
    cout << "Parking Ticket Simulation" << endl;

    // Basic Object Creation
    cout << ">> Basic Object Creation <<\n";
    ParkedCar car1("Toyota", "Camry", "Blue", "ABC123", 60); // 1 hour parked
    ParkingMeter meter1(60); // 1 hour purchased
    PoliceOfficer officer("Jane Doe", "5678", car1, meter1);

    cout << "Created ParkedCar, ParkingMeter, and PoliceOfficer.\n\n";

    // Scenario 1: Legal Parking
    cout << ">> Scenario 1: Legal Parking <<\n";
    if (officer.inspectCar()) {
        ParkingTicket ticket = officer.issueTicket();
        ticket.printTicket();
    }
    else {
        cout << "No violation detected. No ticket issued.\n\n";
    }

    // Scenario 2: Illegal Parking (<1 hour over)
    cout << ">> Scenario 2: Illegal Parking (<1 hour over) <<\n";
    ParkedCar car2("Honda", "Civic", "Red", "XYZ987", 75); // 75 minutes parked
    ParkingMeter meter2(60); // 1 hour purchased
    PoliceOfficer officer2("John Smith", "1234", car2, meter2);

    if (officer2.inspectCar()) {
        ParkingTicket ticket = officer2.issueTicket();
        ticket.printTicket();
    }
    else {
        cout << "No violation detected. No ticket issued.\n\n";
    }

    // Scenario 3: Illegal Parking (multiple hours over)
    cout << ">> Scenario 3: Illegal Parking (Multiple Hours Over) <<\n";
    ParkedCar car3("Ford", "Escape", "Green", "LMN456", 190); // 3 hours 10 mins
    ParkingMeter meter3(60); // 1 hour purchased
    PoliceOfficer officer3("Emily Clark", "7890", car3, meter3);

    if (officer3.inspectCar()) {
        ParkingTicket ticket = officer3.issueTicket();
        ticket.printTicket();
    }
    else {
        cout << "No violation detected. No ticket issued.\n\n";
    }
    
    // Scenario 4: Multiple Cars
    cout << ">> Scenario 4: Multiple Cars <<\n";

    vector<pair<ParkedCar, ParkingMeter>> cars = {
        {ParkedCar("Nissan", "Altima", "Black", "AAA111", 50), ParkingMeter(60)},  // Legal
        {ParkedCar("Chevy", "Malibu", "White", "BBB222", 70), ParkingMeter(60)},  // 10 min over
        {ParkedCar("BMW", "X5", "Silver", "CCC333", 145), ParkingMeter(60)}       // 85 min over
    };

    for (int i = 0; i < cars.size(); ++i) {
        PoliceOfficer officerMulti("Officer Multi", "000" + to_string(i + 1), cars[i].first, cars[i].second);
        cout << "\nInspecting car " << i + 1 << ": " << cars[i].first.getMake()
            << " " << cars[i].first.getModel() << "\n";

        if (officerMulti.inspectCar()) {
            ParkingTicket ticket = officerMulti.issueTicket();
            ticket.printTicket();
        }
        else {
            cout << "No violation detected. No ticket issued.\n";
        }
    }

    cout << "End of Program";
    return 0;
}