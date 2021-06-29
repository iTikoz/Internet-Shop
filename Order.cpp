//
//  Order.cpp
//  Internet-Shop
//
//  Created by iTikoz on 20/12/15.
//  Copyright (c) 2015 iTikoz. All rights reserved.


#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "Order.h"
#include <iomanip>



using namespace std;


Order::Order()
{
	//Order constructor creating an empty list with head = null
	this->head = NULL;
}


Order::~Order()
{
	//Order destructor
	clearOrder();
}



double Order::CalculateTotalToBePaid()const {

	double t = 0.0;

	if (head == NULL) {

		return t;

	}


	Product *current = head;

	while (current) {

		t = t + current->getPrice();

		current = current->getNext();

	}

	return t;
	//    TotalToBePaid = t;
	//    return TotalToBePaid;

}




Product* Order::getHead() {
	return this->head;
}

void Order::setHead(Product *pr) {
	head = pr;
}
void Order::SetTotalToBePaid(double tot) {

	TotalToBePaid = CalculateTotalToBePaid();

}





void Order::add_To_Basket(const char* name, double Price, char Category, long pid) {


	Product *p = new Product(name, Price, Category, pid);

	if (head == NULL)
	{
		head = p;

		return;
	}




	Product *current = head;

	while (current) {

		if (current->getNext() == NULL) {

			current->setNext(p);

			break;
		}

		current = current->getNext();


	}

}




void Order::clearOrder() {

	Product *current = this->head;

	while (current != NULL)
	{
		Product *ne = current->getNext();
		delete current;
		current = ne;
	}
	head =NULL;
}




void Order::printBasket() const
{
	cout << endl << "\t\t\t\t\t\t________\n\t\t\t\t\t\t|Basket|" << endl;
	cout << "\t\t\t\t\t\t________\n\n\n"<<endl;

	cout << "Item" << "\t\t\t---------- " << " ID" << "\t\t-------" << "Category" << " -----------" << "Price\n" << endl;

	Product* current = this->head;

	if (head == NULL) {
		cout << "\n____________\nEmpty Basket" << endl;
	}

	while (current != NULL) {
		current->print();

		current = current->getNext();
	}

	double x = CalculateTotalToBePaid();



	cout << "\n\nTOTAL: $" << x << endl;
	cout << "\n\nTOTAL after tax: $" <<fixed<<std::setprecision(2) << x*1.1 << endl;
	cout << "\n\t\t\t\tEND\n----------------------------------------------------------------------------------------------------------\n" << endl;
}




Order::Order(const Order& object){
	this->head=NULL;
	*this=object;
}


Order& Order::operator=(const Order& object){
        if(this == &object){
                return *this;
        }

        clearOrder();

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


void  Order::remove_Product(int no)
{
	{
		Product *temp = head;
		Product *current = head;

		while (temp)


		{


			if (no == temp->getID())




				if (temp == head)


				{


					head = head->getNext();


					cout << "Required item " << temp->getProductName() << " has been removed from the basket" << endl;




					delete temp;


					return;


				}




				else

					if (current->getNext() == NULL)


					{


						cout << "The end has been reached" << endl;


					}




					else


					{
						Product *t = temp->getNext();
						current->setNext(t);



						cout << "Required item " << temp->getProductName() << " has been removed from the basket" << endl;




						delete temp;


						temp = current->getNext();


						return;


					};




			current = temp;


			temp = temp->getNext();


		};


		cout << "The iD " << no << "  doesn't match any of the items in the basket" << endl;



	}

}





