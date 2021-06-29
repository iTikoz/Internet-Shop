//
//  Product.h
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#pragma once



class Product {

	Product *next;

public:



	Product(const char* name, double Price, char Category, long pid); // constructor
	Product(const char* name, double Price, char Category, int Quantity);
	Product(const Product &object);

	~Product(); // destructor


	char* duplicatePName(const char* name);

const	char* getProductName();

	Product *getNext()const;

	void setNext(Product* n);


 const long getID();

	long setID();


	double getPrice()const;

	void setPrice(double pr);

	int getQuantity();

	void setQuantity(int q);

	char getCategory()const;

	void setCategory(char ca);

	void print(); // prints a single Product
	void Internal_print();





private:


	char *name;
	long iD;
	double Price;
	int Quantity;
	char Category; // category A or B or C for example, to recognize a sort of products.





};
