#include <iostream>
using namespace std;
main()
{
	cout<< "Enter Initial Velocity (m/s): ";
	int initialV;
	cin >> initialV;
	cout << "Enter Acceleration (m/s^2): ";
	int acc;
	cin >> acc;
	cout << "Enter Time (s): ";
	int time;
	cin >> time;
	int finalV;
	finalV= (acc * time) + initialV;
	cout << "Final Velocity (m/s): " << finalV ;
	



}