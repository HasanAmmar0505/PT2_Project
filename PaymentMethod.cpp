#include "PaymentMethod.hpp"
#include <iostream>

void PaymentMethod::setMethod(const string& input) {
    method = input;
}

void PaymentMethod::setStreet(const string& input) {
    street = input;
}

bool PaymentMethod::Validate() {
    if (method.empty() || street.empty()) {
        cout << "Street or Payment are not correctly set" << endl;
        return false;
    }
    cout << "Street and Payment Method have been verified successfully" << endl;
    return true;
}
