#ifndef PreferredCustomer_h
#define PreferredCustomer_h
#include "CustomerData.h"
class PreferredCustomer: public CustomerData
{
private:
	double purchaseAmount;
	double discountLevel;
public:
	//constructor
	PreferredCustomer();
	PreferredCustomer(double, double);
	void setPurchaseAmount(double);
	void setDiscountLevel(double);
	double getPurchaseAmount();
	double getDiscountLevel();
	void displayAmountData();
};
#endif
