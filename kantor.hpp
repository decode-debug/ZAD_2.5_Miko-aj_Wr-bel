//
// Created by mikol on 13.03.2025.
//

#ifndef KANTOR_H
#define KANTOR_H
#include "waluta.hpp"

class kantor {
public:
    kantor() = default;
    const float PLN_to_USD = 0.26;
    const float EUR_to_PLN = 4.18;
    const float PLN_to_EUR = 0.24;
    const float USD_to_PLN = 3.84;
    const float EUR_to_USD = 1.09;
    const float USD_to_EUR = 0.92;

    void convert_currency( Waluta currency_1,  Waluta currency_2) const {
        const std::string type_1 = currency_1.currency_type();
        const std::string type_2 = currency_2.currency_type();
        if (type_1 == "USD" && type_2 == "PLN") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * USD_to_PLN));
            currency_2.set_cents(0);
        }        if (type_1 == "PLN" && type_2 == "USD") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * PLN_to_USD));
            currency_2.set_cents(0);
        }        if (type_1 == "EUR" && type_2 == "PLN") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * EUR_to_PLN));
            currency_2.set_cents(0);
        }        if (type_1 == "PLN" && type_2 == "EUR") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * PLN_to_EUR));
            currency_2.set_cents(0);
        }        if (type_1 == "EUR" && type_2 == "USD") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * EUR_to_USD));
            currency_2.set_cents(0);
        }        if (type_1 == "USD" && type_2 == "EUR") {
            currency_1.set_cents(static_cast<int>(currency_1.cents() + currency_2.cents() * USD_to_EUR));
            currency_2.set_cents(0);
        }
    }
};




#endif //KANTOR_H
