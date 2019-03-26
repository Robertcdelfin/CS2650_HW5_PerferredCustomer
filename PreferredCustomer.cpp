#include "PreferredCustomer.h"
#include <iostream>
PreferredCustomer::PreferredCustomer(): CustomerData() 
{
	purchaseAmount = 0;
	discountLevel = 0;
}
PreferredCustomer::PreferredCustomer(double newPurchaseAmount, double newDiscountLevel)
	: CustomerData(newPurchaseAmount, newDiscountLevel)
{
	purchaseAmount = newPurchaseAmount;
	discountLevel = newDiscountLevel;
}
//set the amount of money spent
void PreferredCustomer::setPurchaseAmount(double newPurchaseAmount)
{
	purchaseAmount = newPurchaseAmount;
}
//setter
void PreferredCustomer::setDiscountLevel(double newDiscountLevel)
{
	discountLevel = newDiscountLevel;
}
//getter for money amount
double PreferredCustomer::getPurchaseAmount()
{
	return purchaseAmount;
}
//getter for discount level
double PreferredCustomer::getDiscountLevel()
{
	return discountLevel;
}
void PreferredCustomer::displayAmountData() 
{
	std::cout << "The customer spent: $ " << getPurchaseAmount() << std::endl;
	std::cout << "The discount percent is: %" << getDiscountLevel() << std::endl;
}