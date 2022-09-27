/*
 * Gas.h
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#ifndef GAS_H_
#define GAS_H_

#include <iostream>

class Gas final {
public:
	float cost;
	Gas(float price);
	virtual ~Gas();

	friend std::ostream& operator<<(std::ostream &s, const Gas &gas);
};

#endif /* GAS_H_ */
