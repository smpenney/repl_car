//
//  Trailer.cpp
//  caranddriver
//
//  Created by Scott Penney on 8/11/22.
//

#include "Trailer.hpp"
#include <iostream>
#include "Plate.hpp"

Trailer::Trailer(std::string n, int a, Plate* p)
{
    name = n;
    axles = a;
    plate = p;
}

Trailer::~Trailer()
{
    // std::cout << "Trailer deconstructor!!!" << std::endl;
}

std::ostream& operator<<(std::ostream &s, const Trailer &trailer)
{
    return s << trailer.name;
}
