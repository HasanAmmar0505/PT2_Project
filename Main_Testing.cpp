#include "Hotel.hpp"
#include "Room.hpp"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    Hotel myHotel(true, "Kuala Lumpur");
    

    cout << "Enter hotel details:" << endl;
    myHotel.ReadUserInput();
    

    Room room1(101, "$100", true);
    Room room2(102, "$150", false);
    Room room3(103, "$400", true);
    

    cout << "\nRoom details before adding to the hotel:" << endl;
    room1.DispRoom();
    room2.DispRoom();
    room3.DispRoom();
    

    myHotel.AddRoom(room1);
    myHotel.AddRoom(room2);
    myHotel.AddRoom(room3);
    

    cout << "\nHotel details after adding the new rooms : " << endl;
    myHotel.DispHotel();
    
    return 0;
}
