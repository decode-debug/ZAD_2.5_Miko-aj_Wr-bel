//
// Created by mikol on 12.03.2025.
//

#include "waluta.hpp"
#include <string>
#include <utility>

Waluta::Waluta(std::string name, const int cents):
    m_name(std::move(name)), m_cents(cents) {}
