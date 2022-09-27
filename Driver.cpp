/*
 * Driver.cpp
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#include "Driver.h"

Driver::Driver(std::string n, int a, License* lic)
{
    name = n;
    age = a;
    license = lic;

}

Driver::~Driver()
{
//	std::cout << "Driver destructor!!!" << std::endl;
}

std::ostream& operator<<(std::ostream &s, const Driver &drv)
{
	return s << drv.name << ", " << drv.age << ", " << *drv.license;
}
