#include "Room.hpp"
#include <iostream>

using namespace std;

Room::Room() : roomnum(0), availability(false) {}


Room::Room(int roomNumber, const std::string& price, bool availability)   : roomnum(roomNumber), price(price), availability(availability) {}

Room::~Room() {
    delete user; 
}

// Display room details
void Room::DispRoom() const {
    cout << "Room Number: " << roomnum << endl;
    cout << "Price: " << price << endl;
    cout << "Availability: " << (availability ? "Yes" : "No") << endl;
    cout << "Package: " << package << endl;
}


void Room::UpdateInfo(User* user) { // Update the info of the user
    this->user = user;
}


std::string Room::ReadUserInput() const {
    return "User input";
}

// Get the room number
int Room::getRoomNumber() const {
    return roomnum;
}
