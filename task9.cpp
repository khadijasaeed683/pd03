#include <iostream>
using namespace std;
main()
 {
	cout << "Enter a 4-digit number: ";
	int nmbr;
	cin >> nmbr;
	int no1;
	no1= nmbr%10;
	int a, no2;
	a= nmbr/10;
	no2= a%10;
	int b, no3;
	b= a/10;
	no3= b%10;
	int c, no4;
	c= b/10;
	no4= c%10;
	int sum;
	sum= no1+no2+no3+no4;
	cout << "Sum of the individual digits: " << sum;
	







}