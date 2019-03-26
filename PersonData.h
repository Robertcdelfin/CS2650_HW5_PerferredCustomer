#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
class PersonData
{
private:
	//last name
	std::string lName;
	//first name
	std::string fName;
	//address
	std::string addr;
	//city
	std::string cite;
	//State
	std::string stat;
	//zip
	std::string zCode;
	//phone
	std::string phon;
public:
	//constructor
	PersonData();
	PersonData(std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	//getters
	std::string getLastName();
	std::string getFirstName();
	std::string getAddress();
	std::string getCity();
	std::string getState();
	std::string getZip();
	std::string getPhone();
	//setters
	void setLastName(std::string);
	void setFirstName(std::string);
	void setAddress(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setZip(std::string);
	void setPhone(std::string);
	//method to display information
	void displayPersonDetails();
};
#endif
