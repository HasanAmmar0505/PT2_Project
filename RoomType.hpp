#ifndef ROOMTYPE_HPP
#define ROOMTYPE_HPP

#include <string>
#include "Room.hpp"

using namespace std;

class Room; 

class RoomType {
private:
    string type;

public:
    void setType(const Room& input);
    string getType() const;
};

#endif 
