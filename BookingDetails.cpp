#include "BookingDetails.hpp"
#include "PaymentMethod.hpp"
#include <iostream>

BookingDetails::BookingDetails() : durationOfStay(0), TotalPrice(0.0), Summary("") {}

void BookingDetails::DispStatus() const {
    cout << "Duration of stay: " << durationOfStay << " days" << endl;
    cout << "Total price: " << TotalPrice << endl;
    cout << "Summary: " << Summary << endl;
}

void BookingDetails::DispPrice() const {
    cout << "Total price: " << TotalPrice << endl;
}

void BookingDetails::Payment(PaymentMethod *payment) {
    this->payment = payment;
}
