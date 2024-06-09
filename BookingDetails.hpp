#ifndef BOOKINGDETAILS_HPP
#define BOOKINGDETAILS_HPP

#include <string>
#include "PaymentMethod.hpp"

using namespace std;

class BookingDetails {
private:
    int durationOfStay;
    double TotalPrice;
    string Summary;
    PaymentMethod *payment; //aggregation to PaymentMethod

public:
    BookingDetails();
    void DispStatus() const;
    void DispPrice() const;
    void Payment(PaymentMethod *payment);
};

#endif 
