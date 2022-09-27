/*
 * Trip.cpp
 *
 *  Created on: Jul 18, 2022
 *      Author: penneys
 */
#include <iostream>
#include "Trip.h"

Trip::Trip(int miles, std::string start, std::string end)
{
	mileage = miles;
	start_city = start;
	end_city = end;
}

Trip::~Trip()
{
//	std::cout << "Trip destructor!!!" << std::endl;
}


float Trip::cost(Car *car, Gas *gas)
{
	return mileage / car->getMPG() * gas->cost;
}

void Trip::execute(Car *car, Gas *gas)
{
	car->addmileage(mileage);
	std::cout << "Your trip is done and cost you $" << Trip::cost(car, gas) << std::endl;
}

std::ostream& operator<<(std::ostream &s, const Trip &trip)
{
	return s << trip.start_city << " to " << trip.end_city << " is " << trip.mileage << " miles.";
}


