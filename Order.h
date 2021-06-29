//
//  Order.h
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#ifndef __Internet_Shop__Order__
#define __Internet_Shop__Order__

#include <stdio.h>

#endif /* defined(__Internet_Shop__Order__) */


#include "Storage.h"
#include "Shipping.h"




class Order {

	Product *head;

	int OrderNumber =100; // starting order numbers from 100.






public:

	Order();

	~Order();
	Order(const Order& object);

	Order& operator=(const Order& object);

	int getOrderNumber(){return OrderNumber++;}


	Product * getHead();
	void setHead(Product *pr);

	double CalculateTotalToBePaid() const;

	void SetTotalToBePaid(double tot);


	void add_To_Basket(const char* name, double Price, char Category, long pid);

	void remove_Product(int no);

	void printBasket() const;
	void clearOrder();



private:

	double TotalToBePaid;



};
