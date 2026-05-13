#ifndef PHONE_H
#define PHONE_H

#include <string>

class Phone {
public:
	std::string idPhone;
	std::string idPerson;
	std::string number;
	std::string provider;
	
	bool insert();
	int showData(std::string dni);
	std::string getOperator(int operatorSelected);
};

#endif
