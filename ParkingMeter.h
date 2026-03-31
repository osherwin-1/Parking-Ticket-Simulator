#pragma once

class ParkingMeter {
private:
    int minutesPurchased;

public:
    ParkingMeter(int mins);

    int getMinutesPurchased() const;
};
