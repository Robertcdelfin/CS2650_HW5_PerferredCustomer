#include "PersonData.h"
#include <iostream>
#include <string.h>

PersonData::PersonData()
{
	lName = " ";
	fName = " ";
	addr = " ";
	cite = " ";
	stat = " ";
	zCode = " ";
	phon = " ";
}
//constructor
PersonData::PersonData(std::string firstName, std::string lastName, std::string address, std::string state, std::string city, std::string zip, std::string phone)
{
	fName = firstName;
	lName = lastName;
	addr = address;
	cite = city;
	stat = state;
	zCode = zip;
	phon = phone;
}

//accessors for variables
std::string PersonData::getLastName()
{
	return lName;
}
std::string PersonData::getFirstName()
{
	return fName;
}
std::string PersonData::getAddress()
{
	return addr;
}
std::string PersonData::getCity()
{
	return cite;
}
std::string PersonData::getState()
{
	return stat;
}
std::string PersonData::getZip()
{
	return zCode;
}
std::string PersonData::getPhone()
{
	return phon;
}
//mutator for variables
void PersonData::setLastName(std::string lastName)
{
	lName = lastName;
}
void PersonData::setFirstName(std::string firstName)
{
	fName = firstName;
}
void PersonData::setAddress(std::string address)
{
	addr = address;
}
void PersonData::setCity(std::string city)
{
	cite = city;
}
void PersonData::setState(std::string state)
{
	stat = state;
}
void PersonData::setZip(std::string zip)
{
	zCode = zip;
}
void PersonData::setPhone(std::string phone)
{
	phon = phone;
}
//Display PersonDetail
void PersonData::displayPersonDetails()
{
	std::cout << "Customer Information" << std::endl;
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Address: " << getAddress() << std::endl;
	std::cout << "City: " << getCity() << std::endl;
	std::cout << "State: " << getState() << std::endl;
	std::cout << "Zip: " << getZip() << std::endl;
	std::cout << "Phone: " << getPhone() << std::endl;
}