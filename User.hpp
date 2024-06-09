#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "BookingDetails.hpp"

using namespace std;

class User {
private:
    string name;
    int phone;
    string email;
    BookingDetails *booking;

public:

    User (string name, int phone, string email);
    User() {}
    ~User();
    void DispInfo() const;
    void Receipt(const BookingDetails* booking) const;
};

#endif 
