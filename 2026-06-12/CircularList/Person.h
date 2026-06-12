#ifndef PERSON_H
#define PERSON_H

#include<string>

class Person {
public:
	Person() {}
	
	std::string dni;
	std::string firstName;
	std::string surName;
	
	void insert();
};

#endif
