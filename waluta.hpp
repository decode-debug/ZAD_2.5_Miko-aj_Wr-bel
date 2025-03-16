//
// Created by mikol on 12.03.2025.
//
#pragma once

#include <bits/basic_string.h>

class Waluta
{
public:
    Waluta(std::string name, int cents);

    void set_cents(const int cents) {
        m_cents = cents;
    }

    std::string currency_type() {
        return m_name;
    }
    [[nodiscard]] int cents() const {
        return m_cents;
    }
    void add_cents(const int add_cents) {
        m_cents =+ add_cents;
    }
    void sub_cents(const int sub_cents) {
        m_cents =- sub_cents;
    }

private:
    std::string m_name;
    int m_cents;

};
