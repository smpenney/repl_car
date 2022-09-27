/*
 * License.h
 *
 *  Created on: Jul 19, 2022
 *      Author: penneys
 */

#ifndef LICENSE_H_
#define LICENSE_H_

#include <iostream>

class License final {
public:
	std::string state;
	std::string number;
	char* expiry;
	License(std::string st, std::string num);
	virtual ~License();
	friend std::ostream& operator<<(std::ostream &s, const License &lic);
};

#endif /* LICENSE_H_ */
