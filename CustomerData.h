#ifndef Customerdata_h
#define Customerdata_h
#include "PersonData.h"
#include <string.h>
class CustomerData : public PersonData 
{
private:
	int customerNumber;
	bool mailingList;
public:
	//Constructors
	CustomerData();
	CustomerData(double, double);
	CustomerData(std::string, std::string, std::string, std::string, std::string, std::string, std::string, int, bool);
	//setters mutator
	void setCustomerNumber(int);
	void setMailingList(bool);
	//getters accessor
	int getCustomerNumber();
	bool getMailingList();
	void displayCustomerDetails();
};
#endif