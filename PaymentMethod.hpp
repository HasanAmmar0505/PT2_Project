#ifndef PAYMENTMETHOD_HPP
#define PAYMENTMETHOD_HPP

#include <string>

using namespace std;

class PaymentMethod {
public:
    string method;
    string street;

public:
    void setMethod(const string& input);
    void setStreet(const string& input);
    virtual bool Validate() = 0; // for future polymorphism
     virtual ~PaymentMethod() = 0;
};

#endif

