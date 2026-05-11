#ifndef PHONE_H
#define PHONE_H

#include <string>

class Phone {
public:
	std::string idPhone;
	std::string idPerson;
	std::string idProvider;
	std::string number;
	
	bool insert();
};

#endif
