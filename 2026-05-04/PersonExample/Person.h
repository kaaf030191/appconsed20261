#include <string>

class Person {
private:
	std::string firstName;
	std::string surName;
public:	
	void insertPerson(std::string firstName, std::string surName);
	void showPerson();
};
