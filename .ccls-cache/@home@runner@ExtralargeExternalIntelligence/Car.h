/*
 * Car.h
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#ifndef CAR_H_
#define CAR_H_

#include "Driver.h"
#include "Plate.hpp"
#include <iostream>
#include <list>

class Car final {
public:
	Car(int y, std::string mk, std::string mod, Driver* o, Plate* p, float odo, float mpg, bool is_driver);
    Car(int y, std::string mk, std::string mod, Driver* o, float odo, float mpg, bool is_driver);
	virtual ~Car();

    void describe();
    void setmileage(float mileage);
    void addmileage(float mileage);
    void setowner(Driver *d, bool keep_owner = true, bool is_driver = true);
    void adddriver(Driver *d, bool front = false);
    void removedriver(Driver *d);
    void showdrivers();
    void setyear(int y);
    float getMPG();
 	friend std::ostream& operator<<(std::ostream &s, const Car &car);
     // describe the car and the drivers that use it in a meaningful format

private:
    std::string make;
    std::string model;
    int year;
    int odometer;
    float mileage;
    Driver *owner;
    Plate *plate;
    std::list<Driver *> drivers;


};

#endif /* CAR_H_ */
