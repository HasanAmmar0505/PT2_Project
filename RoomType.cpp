#include "RoomType.hpp"
using namespace std;

// Set the type of the room based on the Room object
void RoomType::setType(const Room& input) {
    // the logic of setting the room type
    if (input.getRoomNumber() < 100) {
        type = "Standard";
    } else if (input.getRoomNumber() < 200) {
        type = "Deluxe";
    } else {
        type = "Suite";
    }
}


string RoomType::getType() const {
    return type;
}
