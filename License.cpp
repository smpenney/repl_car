/*
 * License.cpp
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#include "License.h"
#include <ctime>
#include <iostream>

License::License(std::string st, std::string num)
{
	state = st;
	number = num;
	time_t now = time(0);
	expiry = ctime(&now);
}

License::~License()
{
//	std::cout << "License destructor!!!" << std::endl;
}

std::ostream& operator<<(std::ostream &s, const License &lic)
{
	return s << lic.state << ": " << lic.number;
}
