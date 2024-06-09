#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include "User.hpp"
#include "RoomType.hpp"

using namespace std;

class Room {
private:
    string price;
    int roomnum;
    bool availability;
    User* user; // aggregation to class user
    string package;
    string type;

public:
    Room();
    Room(int roomNumber, const string& price, bool availability);
    ~Room();
    void DispRoom() const;
    void UpdateInfo(User* user);
    string ReadUserInput() const;
    string getType() const;
    int getRoomNumber() const;
};

#endif 
