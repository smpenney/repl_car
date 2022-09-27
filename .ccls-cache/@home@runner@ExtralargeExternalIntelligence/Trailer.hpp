//
//  Trailer.hpp
//  caranddriver
//
//  Created by Scott Penney on 8/11/22.
//

#ifndef Trailer_hpp
#define Trailer_hpp

#include <stdio.h>
#include "Plate.hpp"

class Trailer final {
public:
    std::string name;
    int axles;
    Plate *plate;

    Trailer(std::string n, int a, Plate* plate);
    virtual ~Trailer();
    
    friend std::ostream& operator<<(std::ostream &s, const Trailer &trailer);
};

#endif /* Trailer_hpp */
