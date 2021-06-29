//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.

/*

Name: iTikoz

Project: Internet-Shop

*/

#include <iostream>
#include <cstring>
#include "Internet_Shop.h"
#include <conio.h>
#include "string.h"
#include <ctime>





using namespace std;







int main() {


// test cases for the order and storage assignent operator after the fixing.

Storage s;

	s.addToStorage("Pantene Shampoo  ", 10, 'B', 12.99);
	s.addToStorage("Adidas Shower Gel", 10, 'B', 10.99);



Storage sCopy=s; // copy of storage 's'
sCopy.printItems();


Order o;

o.add_To_Basket("HDD Hitachi 1TB  ", 90.00, 'C', 123456);
o.add_To_Basket("USB Sandisk 64 GB", 100.00, 'C', 123445);

Order oCopy = o;  // copy of order 'o'

oCopy.printBasket();




	Internet_Shop is;

	is.CreateItemsForSale(); // creates the default storage with the products listed

	is.ItemsOnSale.printItems();
/*
	is.DealWithCustomer();

	//the user is required to enter an iD of a product to add it to the basket!

*/


}
