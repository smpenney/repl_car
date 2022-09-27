//
//  main.cpp
//  caranddriver
//
//  Created by Scott Penney on 7/20/22.
//


#include "Trip.h"
#include "License.h"
#include "Driver.h"
#include "Car.h"
#include "Gas.h"
#include "Trailer.hpp"
#include "Plate.hpp"


int main()
{
    License scott_lic("MI", "P500 760 603 420");
    Driver scott("Scott M. Penney", 47, &scott_lic);

    License pam_lic("MI", "P760 263 405 222");
    Driver pam("Pamela J. Penney", 47, &pam_lic);

    License sam_lic("MI", "P234 423 954 292");
    Driver sam("Samuel X. Penney", 18, &sam_lic);

    License lilly_lic("MI", "P999 234 123 234");
    Driver lilly("Lillian Z. Penney", 15, &lilly_lic);

    Car mycar(2006, "Pontiac", "G6 GT", &scott, 37894, 3.99, true);

    mycar.setowner(&scott);
    mycar.adddriver(&pam);
    mycar.adddriver(&sam);
    mycar.adddriver(&lilly);

    std::cout << "Current state...." << std::endl << std::endl;
    mycar.describe();

    std::cout << "Changing owner...." << std::endl << std::endl;
    mycar.setowner(&lilly, true, true);
    mycar.describe();

    std::cout << "Listing drivers...." << std::endl << std::endl;
    mycar.showdrivers();

    Trip mytrip(999, "EGR", "Lansing");
    std::cout << mytrip << std::endl;

    Gas mygas(4.95);
    std::cout << mytrip.cost(&mycar, &mygas) << std::endl;
    std::cout << mycar << std::endl;

    mytrip.execute(&mycar, &mygas);
    std::cout << mycar << std::endl;
    
    Plate myplate("FUKU", "MI");
    Trailer mytrailer("Hauler", 2, &myplate);
    
    std::cout << myplate << std::endl;
    std::cout << mytrailer << std::endl;
    
    Car plateCar(2016, "Chevrolet", "Traverse", &scott, &myplate, 23423, 10.99, true);
    std::cout << plateCar << std::endl;
}
