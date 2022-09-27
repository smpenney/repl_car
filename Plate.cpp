//
//  Plate.cpp
//  caranddriver
//
//  Created by Scott Penney on 8/13/22.
//

#include "Plate.hpp"
#include <iostream>

Plate::Plate(std::string n, std::string s)
{
    number = n;
    state = s;
}

Plate::~Plate()
{
//    std::cout << "Plate deconstructor!!!" << std::endl;
}

std::ostream& operator<<(std::ostream &s, const Plate &plate)
{
    return s << plate.state << plate.number;
}
