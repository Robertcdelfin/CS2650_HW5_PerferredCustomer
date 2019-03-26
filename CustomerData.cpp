#include "CustomerData.h"
#include <string.h>
#include <iostream>
//default construtor
CustomerData::CustomerData():PersonData() 
{
	customerNumber = 0;
	mailingList = false;
}
CustomerData::CustomerData(double purchaseAmount, double discountLevel) 
{
	purchaseAmount = 0;
	discountLevel = 0;
}
CustomerData::CustomerData(std::string firstName, std::string lastName, std::string address, std::string state, std::string city, std::string zip, std::string phone, int newCustomerNumber, bool newMailingList)
	:PersonData(firstName, lastName, address, state, city, zip, phone) 
{
	customerNumber = newCustomerNumber;
	mailingList = newMailingList;
}
void CustomerData::setCustomerNumber(int newCustomerNumber)
{
	customerNumber = newCustomerNumber;
}
int CustomerData::getCustomerNumber() 
{
	return customerNumber;
}
void CustomerData::setMailingList(bool newMailingList) 
{
	mailingList = newMailingList;
}
bool CustomerData::getMailingList() 
{
	return mailingList;
}
void CustomerData::displayCustomerDetails()
{
	std::cout << "Customer number: " << getCustomerNumber() << std::endl;
	displayPersonDetails();
	std::cout << "Mailing Status: ";
	if (getMailingList()) 
	{
		std::cout << "True In Mailing List " << std::endl << std::endl;
	}
	else 
	{
		std::cout << "False Not In Mailing List" << std::endl << std::endl;
	}
}