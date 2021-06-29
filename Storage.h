//
//  Storage.h
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#ifndef __Internet_Shop__Storage__
#define __Internet_Shop__Storage__

#include <stdio.h>

#include "Producer.h"

#endif /* defined(__Internet_Shop__Storage__) */

class Storage {


private:

	Product * head;


public:

	Storage();
	~Storage();
	Storage(const Storage& object);
	Storage& operator=(const Storage& object);

	Product * getStorageHead();
	void setStorageHead(Product *pr);
	void clearStorage();
	bool isAvailableInStorage(int i_d);
	void checkStorageStatus();



	bool isAvailableInStorage(char* nm);

	void addToStorage(char*prName, int quant, char categ, double price);

	void printStorage()const;
	void printItems()const;

	Product* Find(long ID);




};
