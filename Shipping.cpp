//
//  Shipping.cpp
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#include <ctime>
#include "Shipping.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>



using namespace std;



Shipping::Shipping() {


}


Shipping:: ~Shipping() {

}



int Shipping::getShippingTime() {
	return ShippingTime;

}

void Shipping::setShippingTime(int st) {
	ShippingTime = st;

}
bool Shipping::getShippingMehod() {
	return ShippingMethod;

}



void Shipping::setShippingMethod(bool sm) {
	ShippingMethod = sm;

}

//CalculateShippingDate

double Shipping::CalculateShippingCost() {
	ShippingCost = 10;

	if (getShippingMehod() == 0) { // economic way
		return ShippingCost;
	}

	return ShippingCost + 10; // express way

}

void Shipping::setShippingCost(double sc) {
	ShippingCost = sc;

}


int Shipping::CalculateShippingTime(bool a) {


	int days = 2; //default is express way

	if (getShippingMehod() == 0) { // economy way

		days += 3;
	}


	return days;


}


void Shipping::PrintDeliveryDate() {



	time_t t = time(0);
	struct tm * now = localtime(&t);




	int ShipmentDays = getShippingTime();



	const int d = now->tm_mday;
	const int m = now->tm_mon + 1;
	const int y = now->tm_year + 1900;

	int dd = d;
	int mm = m;
	int yy = y;

	cout << "today's date : " << d << '/' << m << '/' << y << endl;




	int summation = ShipmentDays + dd;

	if (summation <= 28) {



		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << summation << '/' << mm << '/' << yy << endl;
	}

	if (summation <= 30 && m != 2 && m == 4 || m == 6 || m == 9 || m == 11) {

		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << dd << '/' << mm << '/' << yy << endl;
	}




	if (summation>28 && m == 2)   // february
	{


		dd = summation - 28;
		mm += 1;
		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << dd << '/' << mm << '/' << yy << endl;
	}

	if (summation >31 && m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {

		dd = summation - 31;
		mm += 1;
		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << dd << '/' << mm << '/' << yy << endl;
	}

	if (summation >30 && m == 4 || m == 6 || m == 9 || m == 11) {
		dd = summation - 30;
		mm += 1;
		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << dd << '/' << mm << '/' << yy << endl;

	}

	if (summation >30 && m == 12) {

		mm = 1;
		yy += 1;
		dd = summation - 31;
		cout << "Delivery date after estimated " << ShipmentDays << " Days:  " << dd << '/' << mm << '/' << yy << endl;
	}
}
