#include <iostream>
#include "waluta.hpp"
#include "kantor.hpp"

int main() {
    kantor my_cantor;
    std::string currency_1 ={"USD"};
    std::string currency_2 {"PLN"};
    int currency_1_cents {100};
    int currency_2_cents {200};
    my_cantor.convert_currency(Waluta(currency_1, currency_1_cents),
        Waluta(currency_2, currency_2_cents));
    return 0;
}


