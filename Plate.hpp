//
//  Plate.hpp
//  caranddriver
//
//  Created by Scott Penney on 8/13/22.
//

#ifndef Plate_hpp
#define Plate_hpp

#include <stdio.h>
#include <iostream>

class Plate final {
public:
    std::string number;
    std::string state;

    Plate(std::string n, std::string s);
    virtual ~Plate();
    
    friend std::ostream& operator<<(std::ostream &s, const Plate &plate);
};

#endif /* Plate_hpp */
