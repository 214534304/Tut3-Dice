#include "Dice.h"
#include <ctime>        
#include <cstdlib>
                     //include headers required to generate random numbers


float Dice::average(){
}

int Dice::Getarray(){  
	int array[5];
	int i;

	for( i = 0; i <= 5; i++){
		array[i] = Getroll();

	}

	
	                                         //array  method

}

Dice::Dice()
{
	
}
int Dice :: Getroll(){                        //random number method
	srand(time(0));
	return ( rand()%6 )+1;            // return random number generated

}


Dice::~Dice()
{
}
