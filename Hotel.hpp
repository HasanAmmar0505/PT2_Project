#ifndef HOTEL_HPP
#define HOTEL_HPP


#include <string>
#include "Room.hpp"
using namespace std;

class Hotel {
private:
    string name;
    string location;
    bool availability;
    string package;
    double rating;
    int roomCount;
    Room rooms[100]; // Composition to Room class

public:
    Hotel();
    Hotel(bool, string);
    void DispHotel() const;
    void ReadUserInput();
    void AddRoom(const Room& room);

    
};
#endif

