#include <iostream>
using namespace std;
main()
{
	cout<< "Enter the movie name: ";
	string name;
	cin >> name;
	cout << "Enter the adult ticket price: $";
	float adultP;
	cin >> adultP;
	cout << "Enter the child ticket price: $";
	float childP;
	cin >> childP;
	cout << "Enter the number of adult tickets sold: ";
	float adultSold;
	cin >> adultSold;
	cout << "Enter the number of child tickets sold: ";
	float childSold;
	cin >> childSold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	float per;
	cin >> per ;
	float adultTSP, childTSP, totalPrice;
	adultTSP= adultP*adultSold;
	childTSP= childP*childSold;
	totalPrice= adultTSP+childTSP;
	float percentage;
	percentage= (per/100)*totalPrice;
	float remaining;
	remaining = totalPrice - percentage;
	cout << endl;
	cout << "Movie: " << name <<endl;
	cout <<"Total amount generated from ticket sales: $" << totalPrice <<endl;
	cout << "Donation to charity (" << per <<"%): $" << percentage <<endl ;
	cout << "Remaining amount after donation: $" << remaining  <<endl;

	



}