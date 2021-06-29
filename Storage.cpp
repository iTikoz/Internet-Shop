//
//  Storage.cpp
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.
//

#include "Storage.h"
#include <string.h>
#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

using namespace std;




Storage::Storage()
{

	this->head = NULL;
}

Storage::~Storage() {
	clearStorage();
}


Storage::Storage(const Storage& object){
	this->head=NULL;
	*this=object;
}

void Storage::clearStorage(){
	Product *ptr = head;
	while(ptr)
	{
		head = ptr->getNext();
		delete ptr;
		ptr = head;
	}
}

Product * Storage::getStorageHead() {
	return head;
}

void Storage::setStorageHead(Product *pr) {
	head = pr;
}

bool Storage::isAvailableInStorage(int i_d) {

	if (head == NULL) {
		return false;
	}

	Product * current = head;

	while (current) {

		if (current->getID() == i_d) {
			return true;
			break;
		}

		current = current->getNext();


	}

	return false;

}



Storage& Storage::operator=(const Storage& object){
       if(this == &object){
                return *this;
        }

        clearStorage();

        Product *current= object.head;
        Product *x = NULL;
        while(current){
                if(head==NULL){
                        head = new Product(*current);
                        x = head;
                } else
				{
                        x->setNext(new Product(*current));
                        x=x->getNext();
                }
                current=current->getNext();
        }
        return *this;
}


bool Storage::isAvailableInStorage(char*nm) {

	if (head == NULL) {
		return false;
	}

	Product * current = head;

	while (current) {

		if (strcmp(current->getProductName(), nm) == 0) {
			return true;
			break;
		}

		current = current->getNext();


	}

	return false;

}

void Storage::addToStorage(char *Pname, int quant, char cat, double pr) {

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


void Storage::printStorage() const {

	cout << endl << setw(50) << "|In Stock|\n " << endl;


	cout << "  Item" << "\t\t        ---------- " << "Quantity" << "\t---------- " << " ID" << " \t---------- " << "   Category" << "  ----------" << " Price\n" << endl;

	Product* current = this->head;

	if (head == NULL) {
		cout << "\n____________\nNo products " << endl;
	}

	while (current != NULL) {
		current->Internal_print();

		current = current->getNext();
	}


	cout << "\n" << setw(50) << " END " << endl;


	cout << setw(20) << " ----------------------------------------------------------------------------------------------------- " << endl;

}


void Storage::printItems()const {

	cout << endl << setw(50) << "|Items on sale!|\n " << endl;


	cout << "Item" << "\t\t\t---------- " << " ID" << "\t\t-------" << "Category" << " -----------" << "Price\n" << endl;

	Product* current = this->head;

	if (head == NULL) {
		cout << "\n____________\nNo products " << endl;
	}

	while (current != NULL) {
		current->print();

		current = current->getNext();
	}


	cout << "\n" << setw(50) << " END " << endl;


	cout << setw(20) << " ----------------------------------------------------------------------------------------------------- " << endl;




}


void Storage:: checkStorageStatus(){

if (head==NULL){
        cout<<"The storage is completely empty !"<<endl;
    return;
}

Product *current = head;

while(current){

    if(current->getQuantity()<=5){

        current->setQuantity(10);

    }
    current = current->getNext();

}

}









Product* Storage::Find(long ID) {
	Product * pp = head;

	while (pp) {
		if (pp->getID() == ID) {
			return pp;

		}
		pp = pp->getNext();
	}

	return pp;

}
