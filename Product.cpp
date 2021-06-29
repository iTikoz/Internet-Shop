//
//  Product.cpp
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "Product.h"
using std::cout;
using std::setw;

using namespace std;





Product::Product(const char* name, double Price, char Category, long pid) {


	this->name = duplicatePName(name);
	this->iD = pid;
	this->Price = Price;
	this->Category = Category;
	this->next = NULL;


}

Product::Product(const char* name, double Price, char Category, int Quantity) {


	this->name = duplicatePName(name);
	this->iD = setID();
	this->Price = Price;
	this->Category = Category;
	this->Quantity = Quantity;
	this->next = NULL;


}



Product::~Product()
{

	//cout <<"~Product:" << name <<" has been removed." << endl; to test the deleting of Products to avoid segmentation faults
	delete[] this->name;

}


Product::Product(const Product &object){

	this->Category = object.Category;
	this->name = duplicatePName(object.name);
	this->iD  = object.iD;

	this->Price = object.Price;
	this->setNext(NULL);
}




Product* Product::getNext()const {

	return this->next;
}

const char* Product::getProductName() {

	return name;

}


void Product::setNext(Product* n) {
	next = n;
}
char* Product::duplicatePName(const char* name)
{
	char* dupName = new char[strlen(name) + 1];
	strcpy(dupName, name);
	return dupName;
}

const long Product::getID() {


	return iD;

}


long Product::setID() {


	long firstRand = rand() % (RAND_MAX - 100000 + 1) + 100000;

	long secondRand = rand() % (RAND_MAX - 100000 + 1) + 100000;

	long thirdRand = rand() % (RAND_MAX - 100000 + 1) + 100000;



	iD = firstRand + secondRand + thirdRand; // it looks realistic now, all the iDs are with the same number of digits

	iD *= 123;
	iD += 1000;



	return iD;

}




double Product::getPrice()const {
	return Price;
}

void Product::setPrice(double pr) {
	Price = pr;
}

int Product::getQuantity() {

	return Quantity;
}

void Product::setQuantity(int q) {
	Quantity = q;
}
char Product::getCategory()const {
	return Category;
}
void Product::setCategory(char ca) {
	Category = ca;
}

void Product::print() {
	cout << duplicatePName(name) <<" \t---------- " << getID() << " \t---------- " << getCategory()  << " \t---------- $" << getPrice() << endl;
}

void Product::Internal_print() {

	//const char separator    = '-';

	cout << duplicatePName(name) << "\t----------  " << getQuantity() << " \t---------- " << getID() << " \t----------  " << getCategory() << "\t----------- $" << getPrice() << endl;


}



