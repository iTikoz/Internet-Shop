//
//  Producer.cpp
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
#include "Producer.h"

using std::cout;
using std::setw;

using namespace std;


Producer::Producer()
{

	this->head = NULL;
}


Producer::Producer(const char* ProducerName, char ProducerCategory) {

	this->ProducerName = duplicateProducerName(ProducerName);


	this->ProducerCategory = ProducerCategory;

	this->head = NULL;



}


Producer::~Producer()
{
	// delete [] this->ProducerName;

}



char* Producer::getProducerName() {

	return ProducerName;
}

void Producer::setProducerName(char* na) {

	ProducerName = na;
}


char* Producer::duplicateProducerName(const char* ProducerName)
{
	char* duplName = new char[strlen(ProducerName) + 1];
	strcpy(duplName, ProducerName);
	return duplName;
}




char Producer::getProducerCategory()const {
	return ProducerCategory;
}

void Producer::setProducerCategory(char cat) {
	ProducerCategory = cat;
}




void Producer::add_Product(char *Pname, int quant, char cat, double pr) {

	Product  *NewProduct = new Product(Pname, pr, cat, quant);

	NewProduct->setNext(NULL);

	if (head == NULL)
	{
		head = NewProduct;
		return;
	}

	Product *current = head;



	while (current) {

		if (current->getNext() == NULL) {

			current->setNext(NewProduct);
			break;
		}
		current = current->getNext();
	}

}




void Producer::print() const {

	cout << endl << setw(50) << "|Producer: " << "|\n " << endl;

	//char*prn = duplicateProducerName(ProducerName);
	cout << "  Item" << "\t\t        ---------- " << "Quantity" << "\t---------- " << " ID" << " \t---------- " << "   Category" << "  ----------" << " Price\n" << endl;

	Product* current = this->head;

	if (head == NULL) {
		cout << "\n____________\nNo products at this Producer" << endl;
	}

	while (current != NULL) {
		current->Internal_print();

		current = current->getNext();
	}


	cout << "\n" << setw(50) << " END " << endl;


	cout << setw(20) << " ----------------------------------------------------------------------------------------------------- " << endl;

}



















