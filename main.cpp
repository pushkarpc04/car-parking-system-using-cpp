#include <iostream>
#include <cstdlib> // Use cstdlib instead of process.h for better portability

using namespace std;

class Parking {
protected:
    int amount;
    int Count;
    int twoWheelerCount, threeWheelerCount, fourWheelerCount;

public:
    Parking() : amount(0), Count(0), twoWheelerCount(0), threeWheelerCount(0), fourWheelerCount(0) {}

    void deleteRecord() {
        amount = 0;
        Count = 0;
        twoWheelerCount = 0;
        threeWheelerCount = 0;
        fourWheelerCount = 0;
        cout << "**************************************************" << endl;
        cout << "All records deleted." << endl;
        cout << "**************************************************" << endl;
    }
};

class TwoWheeler : virtual public Parking {
public:
    void parkTwoWheeler() {
        if (Count < 50) {
            twoWheelerCount++;
            amount += 100;
            Count++;
            cout << "**************************************************" << endl;
            cout << "A new Two-Wheeler has parked." << endl;
            cout << "Total number of vehicles: " << Count << endl;
            cout << "Free spaces remaining: " << 50 - (twoWheelerCount + threeWheelerCount + fourWheelerCount) << endl;
            cout << "**************************************************" << endl;
        } else {
            cout << "Sorry! Parking is full." << endl;
        }
    }
};

class ThreeWheeler : virtual public Parking {
public:
    void parkThreeWheeler() {
        if (Count < 50) {
            threeWheelerCount++;
            amount += 200;
            Count++;
            cout << "**************************************************" << endl;
            cout << "A new Three-Wheeler has parked." << endl;
            cout << "Total number of vehicles: " << Count << endl;
            cout << "Free spaces remaining: " << 50 - (twoWheelerCount + threeWheelerCount + fourWheelerCount) << endl;
            cout << "**************************************************" << endl;
        } else {
            cout << "Sorry! Parking is full." << endl;
        }
    }
};

class FourWheeler : virtual public Parking {
public:
    void parkFourWheeler() {
        if (Count < 50) {
            fourWheelerCount++;
            amount += 300;
            Count++;
            cout << "**************************************************" << endl;
            cout << "A new Four-Wheeler has parked." << endl;
            cout << "Total number of vehicles: " << Count << endl;
            cout << "Free spaces remaining: " << 50 -
