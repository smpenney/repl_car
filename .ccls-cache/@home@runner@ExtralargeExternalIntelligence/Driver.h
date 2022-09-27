/*
 * Driver.h
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include "License.h"
#include <iostream>

class Driver final {
public:
	std::string name;
	int age;
	License *license;

	Driver(std::string n, int a, License* lic);
	virtual ~Driver();

    friend std::ostream& operator<<(std::ostream &s, const Driver &driver);
};

#endif /* DRIVER_H_ */
