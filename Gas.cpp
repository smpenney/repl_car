/*
 * Gas.cpp
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#include "Gas.h"

Gas::Gas(float price)
{
	cost = price;
}

Gas::~Gas()
{
//	std::cout << "Gas destructor!!!" << std::endl;
}

std::ostream& operator<<(std::ostream &s, const Gas &gas)
{
	return s << "$" << gas.cost;
}

