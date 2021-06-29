//
//  Shipping.h
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#ifndef __Internet_Shop__Shipping__
#define __Internet_Shop__Shipping__

#include <stdio.h>


#endif /* defined(__Internet_Shop__Shipping__) */


class Shipping {




private:



	bool ShippingMethod; // since there are only two shipping ways, true : express, false : Economic

	int ShippingTime =0; // number of days needed to deliver a certain product that has been ordered

	double ShippingCost; // shipping cost depends on the shippingMethod that will be chosen by the buyer


public:

	Shipping(); // constructor

	~Shipping(); // destructor

	void setShippingTime(int st);

	int getShippingTime();


	bool getShippingMehod(); // 0 :economic, 1:express

	void setShippingMethod(bool sm);

	int CalculateShippingTime(bool a);


	void PrintDeliveryDate();

	double CalculateShippingCost(); // $10 for economic and $20 for express(fast) shipping


	void setShippingCost(double sc);






};
