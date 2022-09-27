/*
 * Trip.h
 *
 *  Created on: Jul 18, 2022
 *      Author: penneys
 */
#include <iostream>
#include "Car.h"
#include "Gas.h"

#ifndef TRIP_H_
#define TRIP_H_

class Trip final {
public:
	int mileage;
	std::string start_city;
	std::string end_city;

	Trip(int, std::string, std::string);
	virtual ~Trip();

	float cost(Car *car, Gas *gas);
	void execute(Car *car, Gas *gas);
	friend std::ostream& operator<<(std::ostream &s, const Trip &trip);
};


#endif /* TRIP_H_ */
