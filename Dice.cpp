#include "Dice.h"
#include <ctime>        
#include <cstdlib>
#include "Dice.h"
        //include headers required to generate random numbers


float Dice::average(){
	return Getarray()/6;
}

int Dice::Getarray(){  
	int Sum=0;
	int array[6];
    int i,j;

	for( i = 0; i <= 5; i++){
		array[i] = Getroll();

	}

	for (j = 0; j <= 5; j++){
		Sum =Sum  + array[j];
		
	}

	return Sum;

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
