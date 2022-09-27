/*
 * Car.cpp
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#include "Car.h"
#include "Plate.hpp"

Car::Car(int y, std::string mk, std::string mod, Driver* o, Plate* p, float odo, float mpg, bool is_driver = true)
{
        year = y;
        make = mk;
        model = mod;
        owner = o;
        plate = p;
        odometer = odo;
        mileage = mpg;
        if (is_driver)      // If the owner is also a driver, add them to the drivers list
        {
            adddriver(o, true);
        }

}

Car::Car(int y, std::string mk, std::string mod, Driver* o, float odo, float mpg, bool is_driver) {
    year = y;
    make = mk;
    model = mod;
    owner = o;
//    plate = new Plate("NONE", "NA");
    plate = nullptr;
    odometer = odo;
    mileage = mpg;
    if (is_driver) {
        adddriver(o, true);
    }
};

Car::~Car()
{
//	std::cout << "Car destructor!!!" << std::endl;
}

void Car::describe()
{
    std::list<Driver*>::iterator it;

    std::cout << owner->name << "'s car is a " << year << " " << make << " " << model;
    std::cout << " with " << odometer << " miles on the clock.." << std::endl;
    std::cout << owner->name << "'s car has " << drivers.size() << " registered drivers:" << std::endl;

    showdrivers();
}

// Update the mileage of the vehicle
void Car::setmileage(float mileage)
{
    odometer = mileage;
}

// Add mileage based on a trip being taken
void Car::addmileage(float miles)
{
	odometer += miles;
}

// Change the owner of a vehicle.  Options to keep the old owner as a driver,
// and to make the new owner a driver
void Car::setowner(Driver *d, bool keep_owner, bool is_driver)
{
    if (!keep_owner)
    {
        removedriver(owner);
    }
    owner = d;
    if (is_driver)
    {
        removedriver(d);
        adddriver(d, true);
    }
}

// Add a driver.  Optionally make sure this driver is at the top of the drivers list
void Car::adddriver(Driver *d, bool front)
{
    if (front)
    {
        drivers.push_front(d);
    } else {
        drivers.push_back(d);
    }
}

// Remove all instances of a given driver
void Car::removedriver(Driver *d)
{
    drivers.remove(d);
}

// Show all drivers
void Car::showdrivers()
{
    std::list<Driver*>::iterator it;
    for (it = drivers.begin(); it != drivers.end(); ++it)
    {
        std::cout << "\t" << *(*it) << std::endl;
    }
}

// Update the year of the car
void Car::setyear(int y)
{
    year = y;
}

float Car::getMPG()
{
	 return mileage;
}

std::ostream& operator<<(std::ostream &s, const Car &car)
{
    if ( car.plate == nullptr) {
        return s << car.owner->name << "'s car is a " << car.year << " " << car.make << " " << car.model
                 << " with " << car.odometer << " miles on the clock.." << " (no plate)";
    }
	return s << car.owner->name << "'s car is a " << car.year << " " << car.make << " " << car.model
			 << " with " << car.odometer << " miles on the clock.." << " (" << *car.plate << ")";
};


