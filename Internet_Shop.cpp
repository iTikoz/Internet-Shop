#include "Internet_Shop.h"



#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <iomanip>


using std::cout;
using std::setw;

using namespace std;




Internet_Shop::Internet_Shop() :Sh(), stock(),ItemsOnSale(), ord(), iTechno(), Electrox(), Cosmex(), iCosmet(), CasualX(), iClassic() {

	//createDefaultStorage();
	//createProducers();
}

Internet_Shop ::~Internet_Shop() {

}

void Internet_Shop::CreateItemsForSale() {

	createDefaultStorage();


	ItemsOnSale = stock;

	ItemsOnSale.addToStorage("Rylko Class Shoes ", 100, 'A', 129.99);






}

void Internet_Shop::createProducers() {

	// Electronics

	Electrox.add_Product("iPhone 6         ", 100, 'C', 450.0);
	Electrox.add_Product("iPhone 6s        ", 100, 'C', 570.0);
	Electrox.add_Product("Motorola V3i     ", 100, 'C', 199.99);
	Electrox.add_Product("Samsung S5       ", 100, 'C', 400.0);
	Electrox.add_Product("MacBook Air      ", 100, 'C', 829.99);
	Electrox.add_Product("MacBook Pro 13   ", 100, 'C', 999.99);
	Electrox.add_Product("Beats Headphones ", 100, 'C', 299.99);
	Electrox.add_Product("E-Cigarette ego  ", 100, 'C', 22.99);

	iTechno.add_Product("iPhone 6         ", 100, 'C', 440.00);
	iTechno.add_Product("MacBook Pro 13   ", 100, 'C', 1000.99);
	iTechno.add_Product("MacBook Pro 15   ", 100, 'C', 1799.99);
	iTechno.add_Product("DDR RAM 8GB      ", 100, 'C', 99.99);
	iTechno.add_Product("DDR RAM 16GB     ", 100, 'C', 199.99);
	iTechno.add_Product("HDD Hitachi 1TB  ", 100, 'C', 129.99);
	iTechno.add_Product("USB Sandisk 64 GB", 100, 'C', 30.00);






	// Cosmetics
	Cosmex.add_Product("Armani Perfume   ", 100, 'B', 44.00);
	Cosmex.add_Product("Gucci Perfume    ", 100, 'B', 39.99);
	Cosmex.add_Product("Pantene Shampoo  ", 100, 'B', 11.99);
	Cosmex.add_Product("Adidas Shower Gel", 100, 'B', 9.99);
	Cosmex.add_Product("Avon Face Soap   ", 100, 'B', 6.99);
	Cosmex.add_Product("Lirene Face Cream", 100, 'B', 14.99);


	iCosmet.add_Product("Avon Hair Gel     ", 100, 'B', 6.99);
	iCosmet.add_Product("Pantene Shampoo   ", 100, 'B', 12.99);
	iCosmet.add_Product("l'oreal Mkp Remover", 100, 'B', 9.99);
	iCosmet.add_Product("inglot Nail Polish", 100, 'B', 5.99);
	iCosmet.add_Product("Nivea Body Lotion ", 100, 'B', 15.99);
	iCosmet.add_Product("Lirene Face Cream ", 100, 'B', 12.99);


	CasualX.add_Product("Levi's Jeans      ", 100, 'A', 76.99);
	CasualX.add_Product("Cropp T-Shirt     ", 100, 'A', 16.99);
	CasualX.add_Product("Reserved Jacket   ", 100, 'A', 69.99);
	CasualX.add_Product("Adidas Trainers   ", 100, 'A', 159.99);
	CasualX.add_Product("Converse Shoes    ", 100, 'A', 49.99);


	iClassic.add_Product("Vistula Shirt     ", 100, 'A', 44.99);
	iClassic.add_Product("Vistula Suit      ", 100, 'A', 210.99);
	iClassic.add_Product("Mojito Skirt      ", 100, 'A', 39.99);
	iClassic.add_Product("Reserved Dress    ", 100, 'A', 84.99);
	iClassic.add_Product("Rylko Class Shoes ", 100, 'A', 129.99);



}




void Internet_Shop::createDefaultStorage() {


	stock.addToStorage("iPhone 6         ", 10, 'C', 480.0);
	stock.addToStorage("iPhone 6s        ", 15, 'C', 570.0);
	stock.addToStorage("Motorola V3i     ", 30, 'C', 229.99);
	stock.addToStorage("Samsung S5       ", 10, 'C', 440.0);
	stock.addToStorage("MacBook Air      ", 10, 'C', 859.99);
	stock.addToStorage("MacBook Pro 13   ", 10, 'C', 1199);
	stock.addToStorage("Beats Headphones ", 10, 'C', 349.99);
	stock.addToStorage("E-Cigarette ego  ", 80, 'C', 28.99);
	stock.addToStorage("MacBook Pro 15   ", 8, 'C', 1899.99);
	stock.addToStorage("DDR RAM 8GB      ", 40, 'C', 119.99);
	stock.addToStorage("DDR RAM 16GB     ", 30, 'C', 219.99);
	stock.addToStorage("HDD Hitachi 1TB  ", 15, 'C', 139.99);
	stock.addToStorage("USB Sandisk 64 GB", 80, 'C', 35.00);
	// Cosmetics
	stock.addToStorage("Armani Perfume   ", 10, 'B', 49.00);
	stock.addToStorage("Gucci Perfume    ", 10, 'B', 45.99);
	stock.addToStorage("Pantene Shampoo  ", 10, 'B', 12.99);
	stock.addToStorage("Adidas Shower Gel", 10, 'B', 10.99);
	stock.addToStorage("Avon Face Soap   ", 10, 'B', 8.99);
	stock.addToStorage("Lirene Face Cream", 10, 'B', 16.99);
	stock.addToStorage("Avon Hair Gel     ", 10, 'B', 8.99);
	stock.addToStorage("Pantene Shampoo   ", 10, 'B', 13.99);
	stock.addToStorage("l'oreal Mkp Remover", 10, 'B', 11.99);
	stock.addToStorage("inglot Nail Polish", 10, 'B', 6.99);
	stock.addToStorage("Nivea Body Lotion ", 10, 'B', 17.99);
	//Clothes
	stock.addToStorage("Levi's Jeans      ", 10, 'A', 77.99);
	stock.addToStorage("Cropp T-Shirt     ", 10, 'A', 19.99);
	stock.addToStorage("Reserved Jacket   ", 10, 'A', 63.99);
	stock.addToStorage("Adidas Trainers   ", 10, 'A', 163.99);
	stock.addToStorage("Vistula Shirt     ", 10, 'A', 46.99);
	stock.addToStorage("Vistula Suit      ", 10, 'A', 220.99);
	stock.addToStorage("Reserved Dress    ", 10, 'A', 86.99);

}


void Internet_Shop::selectitem(long pid) {


	if (ItemsOnSale.isAvailableInStorage(pid) == false) {
		cout << "No such item with ID : " << pid << " is on sale! ";
		return;
	}

	Product *pp = ItemsOnSale.Find(pid);

	if(pp == NULL){

        if (ItemsOnSale.isAvailableInStorage(pid) == false) {
		cout << "No such item with ID : " << pid << " is on sale! ";
		return;
	}

	}


	ord.add_To_Basket(pp->getProductName(), pp->getPrice(), pp->getCategory(), pp->getID());

	cout << "The item: " << pp->getProductName() << " has been added to you basket";


}

void Internet_Shop::removeitem(long pid) {
	Product *pp = ItemsOnSale.Find(pid);

	if(pp == NULL){

 		cout << "No such item with ID : " << pid << " is on sale! ";
		return;
	}

	ord.remove_Product(pp->getID());

}


void Internet_Shop::submitOrder() {


	if (ord.getHead() == NULL) {

		cout << "No items in the basket to submit" << endl;

		return;

	}

	time_t t = time(0);
	struct tm * now = localtime(&t);
	const int d = now->tm_mday;
	const int m = now->tm_mon + 1;
	const int y = now->tm_year + 1900;



	double x = ord.CalculateTotalToBePaid();

	x *= 1.23;

	cout << "\nTotal to be paid after Tax: "<<fixed<< std::setprecision(2)<<"$"<< x << endl;
	if (m == 12 && d>15 && d<31) {
		cout << "Congratulations you have 10% Christmas discount, Merry Christmas!" << endl; //christmas discount
		x = 0.85*x;
	}
	x += Sh.CalculateShippingCost();





	cout << "\nTotal to be paid after Shipping: "<<fixed <<std::setprecision(2) << x<<", your Order Number is #"<<ord.getOrderNumber()<< endl;
	cout << "\nThanks for shopping with us!" << endl;





	Order SubOrder; // submitted order



	SubOrder = ord;

	Product *temp = ord.getHead();
	SubOrder.setHead(temp);
	Product *temp2 = stock.getStorageHead();

	while (temp) {

		while (temp2) {

			if (temp->getID() == temp2->getID()) {

				temp2->setQuantity(temp2->getQuantity() - 1); // decrementing the quantity from the storage.
				temp2 = temp2->getNext();


			}
			temp = temp->getNext();
		}


	}


	ord.clearOrder();








}



void Internet_Shop::DealWithShipping() {


	bool ShipMeth;
	cout << "Enter a Shipping method...Economic : 5 days ($10), Express: 2 days ($20) " << endl;
	cout << "\n0. Economic ..... 1. Express" << endl;
	cin >> ShipMeth;

	Sh.setShippingMethod(ShipMeth);
	int daysSofar = Sh.CalculateShippingTime(ShipMeth);



	Product *current = ord.getHead();


	while(current){

	if(stock.isAvailableInStorage(current->getID()) == false){

	cout<<"Sorry we don't have this item at the moment, additional 2 days will be added to the delivery"<<endl;
	daysSofar +=2;
	break;
	}
	current = current->getNext();

	}


	Sh.setShippingTime(daysSofar);

	Sh.PrintDeliveryDate();












}

char* Internet_Shop::getUserName() {
	return username;
}

char* Internet_Shop::getAddress() {
	return address;
}

void Internet_Shop::DealWithCustomer() {



	cout << "\nPlease enter your userame:\n" << endl;
	cin >> username;

	cout << "\nHello " << username << "!" << endl;


	cout << "\nPlease enter your address of Shipping:\n" << endl;

	cin >> address;


	char ch = '!';

	while (ch != 'E')
	{

		cout << endl;
		cout << "G. Go to the shopping menu" << endl;
		cout << "U. Show User detemps" << endl;
		cout << "E. EXIT" << endl;
		cout << "Enter your choice: " << endl;
		ch = _getche();

		if (ch == 'G' || ch == 'g')
		{
			while (ch != '<')
			{
				cout << endl;
				cout << "A. Add an item to the basket" << endl;
				cout << "B. Show current basket items" << endl;
				cout << "R. Remove an item from the basket." << endl;
				cout << "P. Proceed with order and go to Shipping." << endl;
				cout << "S. Submit Order." << endl;
				cout << "<. Press '<' to go back" << endl;
				cout << "Enter your choice: " << endl;
				ch = _getche();


				if (ch == 'A' || ch == 'a')
				{
					cout << "\n";
					cout << "Enter the iD of the item you want to add to the basket" << endl;

					int si;
					cin >> si;
					selectitem(si);

					_getch();

				}
				else if (ch == 'B' || ch == 'b')
				{
					cout << "\n";
					ord.printBasket();
					_getch();
				}


				else if (ch == 'R' || ch == 'r')
				{
					cout << "\n";
					cout << "Enter the iD of the item you want to remove the basket" << endl;
					int ri;
					cin >> ri;
					removeitem(ri);

					_getch();
				}



				else if (ch == 'P' || ch == 'p')
				{
					cout << "\n";
					if (ord.getHead() == NULL) {
						cout << "Can't Proceed with Order, the Basket is empty!" << endl;
						break;
					}
					else
						DealWithShipping();
					cout << "\nOrder will be Shipped to the address:" << address << endl;
					cout <<"Please submit your order" <<endl;

					_getch();

				}

				else if (ch == 'S' || ch == 's')
				{
					cout << "\n";
					if (ord.getHead() == NULL) {
						cout << "Can't Proceed with Order, the Basket is empty!" << endl;
						break;
					}

					if (Sh.getShippingTime() == 0) {
						cout << "Can't Proceed with Order, Please choose a Shipping method first." << endl;
						break;
					}

					else

					submitOrder();
					_getch();
				}

				break;




			}
		}
		else if (ch == 'U' || ch == 'u')
		{
			while (ch != '<')
			{

				_getch();


				cout << endl;
				cout << "<. Press '<' to go back" << endl;


				cout << "\nAccount name :" << username << endl;

				cout << "\nAddress of Shipping: " << address << endl;
				_getch();
				break;



			}
		}


	}










}
