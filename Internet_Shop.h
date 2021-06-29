#ifndef Internet_Shop_H
#define Internet_Shop_H

#include <stdio.h>
//#include "Chrono.h"
#include "Order.h"










class Internet_Shop {

private:

	double total; // total after tax and shipping


	char username[50];
	char address[50];




public:



	Internet_Shop();
	~Internet_Shop();

	Producer Electrox;
	Producer iTechno;
	Order ord;

	Producer Cosmex;
	Producer iCosmet;
	Producer CasualX;
	Producer iClassic;
	Storage stock; // default storage
	Storage ItemsOnSale;
	Shipping Sh;


	void DealWithCustomer();

	void selectitem(long pid);


	void createDefaultStorage();

	void createProducers();

	void DealWithShipping();

	void submitOrder();
	void removeitem(long pid);

	char*  getUserName();

	char* getAddress();

	void CreateItemsForSale();


};

#endif // Internet_Shop_H
