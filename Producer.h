//
//  Producer.h
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#ifndef __Internet_Shop__Producer__
#define __Internet_Shop__Producer__

#include <stdio.h>

#endif /* defined(__Internet_Shop__Producer__) */


#include "Product.h"


class Producer {



private:

	Product *head;

	char *ProducerName;

	char ProducerCategory;



public:

	Producer(const char* ProducerName, char ProducerCategory);

	Producer();

	~Producer();


	char getProducerCategory()const;

	void setProducerCategory(char ca);

	char* duplicateProducerName(const char* ProducerName);

	char* getProducerName();

	void setProducerName(char* na);

	void add_Product(char *name, int quant, char cat, double pr);

	void remove_Product(int i_d);

	void print()const;





};
