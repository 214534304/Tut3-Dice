#include "Dice.h"
#include <iostream>

using namespace std;

int main(){
	Dice Random_number;
	int array[6];

	cout << Random_number.Getroll() << endl; 
	//cout << Random_number.Getarray() << endl;
	cout << Random_number.average();                                            // Display random generated integer
	cin.get();  



}