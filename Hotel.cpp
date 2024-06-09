#include "Hotel.hpp"
#include <iostream>

using namespace std;

Hotel::Hotel() : availability(false), location("Unknown"), rating(0.0) {}

Hotel::Hotel(bool availability, string location) : availability(availability), location(location) {}

void Hotel:: DispHotel() const {
    cout << "Hotel: " << name << endl
         << "Location: " << location << endl
         << "Availability: " << (availability ? "Yes" : "No") << endl
         << "Package: " << package << endl
         << "Rating: " << rating << endl;

    for (int i = 0; i < 10; i++) {
        rooms[i].DispRoom();
    }
}

void Hotel::ReadUserInput() {
    cout << "Enter the name of the hotel : ";
    getline(cin, name);

    cout << "Enter hotel location: ";
    getline(cin, location);

    cout << "Is the hotel available? ( type 1 for Yes / 0 for No): ";
    cin >> availability;

    cout << "Enter package: ";
    cin.ignore();
    getline(cin, package);
    
    cout << "Enter rating: ";
    cin >> rating;
}

void Hotel::AddRoom(const Room& room)
{
    if (roomCount < 100) 
    {
        rooms[roomCount] = room;
        roomCount++;
    } 
    
    else 
    {
        cout << "No rooms available anymore. " << endl;
    }
}


