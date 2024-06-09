#include "User.hpp"
#include <iostream>

using namespace std;

// Displaying customer's info
void User::DispInfo() const {
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}

// Display booking receipt
void User:: Receipt( const BookingDetails* booking) const {
    cout << "Booking Receipt:" << endl;
    booking->DispStatus();
}
